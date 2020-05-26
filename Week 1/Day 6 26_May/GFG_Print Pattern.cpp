#include <iostream>
using namespace std;

void func(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        func(n - 5);
    }
    cout << n << " ";
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
        func(n);
        cout << endl;
    }
    return 0;
}