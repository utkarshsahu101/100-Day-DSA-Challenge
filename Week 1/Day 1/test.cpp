#include <bits/stdc++.h>
using namespace std;

// int min(long long int a[], int n){

//     return min;
// }

// int max(long long int a[], int n){

//     return max;
// }

int main()
{
    //code
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        long long int a[1000] = {0};
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        int min = a[0];
        int max = a[0];
        for (int i = 1; i < N; i++)
        {
            if (a[i] < min)
                min = a[i];
            if (a[i] > max)
                max = a[i];
        }

        cout << min << " " << max;
        return 0;
    }
    return 0;
}