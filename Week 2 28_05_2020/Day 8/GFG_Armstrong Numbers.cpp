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
        int n;
        cin >> n;
        int y = n;
        int rev = 0;
        while (y != 0)
        {
            rev = rev + pow(y % 10, 3);
            y /= 10;
        }
        if (n == rev)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
    return 0;
}