#include <iostream>
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
        for (int i = 1; i <= 10; i++)
            cout << n * i << " ";
        cout << endl;
        ;
    }
    return 0;
}