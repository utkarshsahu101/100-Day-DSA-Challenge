#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
        if (prime[p] == true)
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;

    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
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
        fun(n);
        cout << endl;
    }
    return 0;
}