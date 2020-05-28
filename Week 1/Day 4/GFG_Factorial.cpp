#include <iostream>
using namespace std;

typedef long long int lli;

lli fact(lli n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
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
        cout << fact(n) << endl;
    }
    return 0;
}