#include <iostream>
#include <cmath>
using namespace std;

int fun(int n, int m)
{
    float a = (log10(m)) / n;
    float b = floor(pow(10, a));
    float c = ceil(pow(10, a));
    int r = pow(b, n);
    int s = pow(c, n);
    if (r == m)
        return b;
    else if (s == m)
        return c;
    else
        return -1;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        cout << fun(n, m) << endl;
    }
    return 0;
}