#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        double n;
        cin >> n;
        double r = (double)b / a;
        cout << floor(a * pow(r, n - 1)) << endl;
    }
    return 0;
}