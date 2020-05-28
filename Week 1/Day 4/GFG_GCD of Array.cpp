#include <iostream>
using namespace std;

// typedef long long int lli;

// result = arr[0]
// For i = 1 to n-1
//   result = GCD(result, arr[i])

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// lli func(lli arr[], lli n){
//     lli g=arr[0];
//     for(lli i=1; i<n; i++){
//         g=gcd(g,arr[i]) ;
//     }
//     return g;
// }

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int g = 0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            g = gcd(g, arr[i]);
        }
        // cout<<func(arr, n)<<endl;
        cout << g << endl;
    }
    return 0;
}