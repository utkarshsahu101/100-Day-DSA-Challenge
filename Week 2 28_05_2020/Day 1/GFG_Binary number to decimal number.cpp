#include <iostream>
#include <cmath>
using namespace std;

typedef long long int lli;

lli func(lli b)
{
    lli n = 0;
    int i = 0;
    while (b != 0)
    {
        n = n + (b % 10) * (lli)pow(2, i);
        b = b / 10;
        i++;
    }
    return n;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        lli b;
        cin >> b;
        cout << func(b) << endl;
    }
    return 0;
}