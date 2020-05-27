#include <iostream>
using namespace std;

typedef unsigned long long int lli;

lli func(lli n)
{
    lli rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    //code
    lli t;
    cin >> t;
    while (t--)
    {
        lli n;
        cin >> n;
        cout << func(n) << endl;
    }
    return 0;
}