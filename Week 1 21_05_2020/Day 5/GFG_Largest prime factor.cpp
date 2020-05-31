#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int lli;

lli fun(lli n)
{
    lli i;
    while (n % 2 == 0)
        n /= 2;
    for (i = 3; i <= sqrt(n); i += 2)
        while (n % i == 0)
            n /= i;
    if (n > 2)
        cout << n;
    else
        cout << i - 2;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin >> n;
        fun(n);
        cout << endl;
    }
    return 0;
}