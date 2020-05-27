#include <iostream>
using namespace std;
int main()
{
    //code
    int t;
    cin >> t;
    int sum = 0;
    while (t--)
    {
        int n;
        cin >> n;
        while (n != 0)
        {
            sum += n % 10;
            n /= 10;
        }
        int rev = 0;
        int n_s = sum;
        while (sum != 0)
        {
            rev = rev * 10 + sum % 10;
            sum /= 10;
        }
        if (rev == n_s)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}