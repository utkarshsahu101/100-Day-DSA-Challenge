#include <iostream>
#include <cmath>
using namespace std;

typedef long long int lli;

lli func(lli num, lli k)
{
    lli result = 0;
    for (lli i = 1; i <= k; i++)
    {
        result = num % 10;
        num /= 10;
    }
    return result;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        lli a, b, k;
        cin >> a >> b >> k;
        lli num = (lli)pow(a, b);
        cout << func(num, k) << endl;
    }
    return 0;
}