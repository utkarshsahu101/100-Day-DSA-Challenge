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
        int count = 0;
        for (int a = 1; a <= n; a++)
            for (int b = 0; b <= n; b++)
                if ((pow(a, 3) + pow(b, 3)) == n)
                    count++;
        cout << count << endl;
    }
    return 0;
}