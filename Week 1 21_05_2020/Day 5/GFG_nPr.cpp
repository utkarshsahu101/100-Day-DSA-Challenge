#include <iostream>
using namespace std;

// int fact(int n){
//     if(n==0)
//         return 1;
//     return n*fact(n-1);
// }

typedef unsigned long long int lli;

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        lli n, r;
        cin >> n >> r;
        // cout<<fact(n)/fact(n-r)<<endl;
        // int count=n-r;
        lli count = r;
        lli res = 1;
        while (count > 0)
        {
            res = res * n;
            n--;
            count--;
        }
        cout << res << endl;
    }
    return 0;
}