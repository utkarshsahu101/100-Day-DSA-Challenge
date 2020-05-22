// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/*You are required to complete this function */

int remove_duplicate(int[], int);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        int n = remove_duplicate(a, sizeof(a) / sizeof(a[0]));

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends

/*You are required to complete this function */
int remove_duplicate(int A[], int N)
{
    //Your code here
    int i = 0;
    for (int j = 1; j < N; j++)
    {
        if (A[i] != A[j])
        {
            i++;
            A[i] = A[j];
        }
    }
    return i + 1;
}