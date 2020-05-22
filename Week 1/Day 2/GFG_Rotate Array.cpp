#include <bits/stdc++.h>
using namespace std;

typedef long int li;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

void rotate(int arr[], int d, int n)
{
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++)
    {
        int tmp = arr[i];
        int j = i;

        while (1)
        {
            int k = j + d;
            if (k >= n)
                k = k - n;
            if (k == i)
                break;
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = tmp;
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    //code
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, d, tmp, j;
        cin >> n >> d;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        rotate(arr, d, n);
        print(arr, n);
    }

    return 0;
}