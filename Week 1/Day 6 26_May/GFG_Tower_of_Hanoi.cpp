#include <iostream>
using namespace std;

void toh(int n, int a, int b, int c, int &count)
{
    // static int count = 0;
    if (n > 0)
    {
        count++;
        toh(n - 1, a, c, b, count);
        cout << "move disk " << n << " from rod " << a << " to rod " << c << endl;
        toh(n - 1, b, a, c, count);
    }
}

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
        toh(n, 1, 2, 3, count);
        cout << count << endl;
    }
    return 0;
}