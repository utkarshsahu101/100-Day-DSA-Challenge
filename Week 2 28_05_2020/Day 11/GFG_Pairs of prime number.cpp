#include <bits/stdc++.h>
using namespace std;

void fun(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= n; p++)
        if (prime[p] == true)
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = 2; j <= n; j++)
            {
                if (prime[j])
                {
                    if (i * j <= n)
                    {
                        cout << i << " " << j << " ";
                    }
                }

                // if(i*j>n)
                //     break;
            }
        }
    }
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