#include <iostream>
using namespace std;

typedef long long int lli;

lli gcd(lli a, lli b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void func(lli a, lli b)
{
    lli g = gcd(a, b);
    lli l = (a * b) / g;
    cout << l << " " << g;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        lli a, b;
        cin >> a >> b;
        func(a, b);
        cout << endl;
    }
    return 0;
}