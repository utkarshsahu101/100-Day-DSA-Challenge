#include <iostream>
#include <cmath>
using namespace std;

typedef unsigned long long int lli;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin >> n;
        if (n == 1)
            cout << 0;
        else
        {
            lli sum = 0;
            for (int i = 2; i <= sqrt(n); i++)
                if (n % i == 0)
                    sum = sum + i + n / i;
            sum += 1;
            if (sum == n)
                cout << 1;
            else
                cout << 0;
        }

        cout << endl;
    }
    return 0;
}