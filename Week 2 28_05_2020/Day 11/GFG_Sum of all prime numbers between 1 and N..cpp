#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int lli;

lli fun(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }
    lli sum = 0;
    for (int p = 2; p <= n; p++)
    {
        if (prime[p])
            sum += p;
    }
    return sum;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fun(n) << endl;
    }
    return 0;
}