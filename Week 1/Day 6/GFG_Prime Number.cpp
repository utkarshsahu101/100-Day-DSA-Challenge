#include <bits/stdc++.h>
using namespace std;

string fun(int n)
{
    if (n <= 1)
        return "No";
    if (n <= 3)
        return "Yes";

    if (n % 2 == 0 || n % 3 == 0)
        return "No";

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return "No";

    return "Yes";
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
        cout << fun(n);
        cout << endl;
    }
    return 0;
}