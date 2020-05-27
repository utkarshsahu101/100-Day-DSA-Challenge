#include <iostream>
using namespace std;

int func(int a, int b, int n)
{
    int cd = b - a;
    int ans;
    ans = a + (n - 1) * cd;
    return ans;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        cout << func(a, b, n) << endl;
        // cout<<endl;
    }
    return 0;
}