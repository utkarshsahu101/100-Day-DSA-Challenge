#include <iostream>

using namespace std;

int s_max(int arr[], int N)
{
    int max = 0;
    int s_max = 0;
    for (int i = 0; i < N; i++)
    {
        if (max < arr[i])
        {
            s_max = max;
            max = arr[i];
        }
        else if (s_max < arr[i])
        {
            s_max = arr[i];
        }
    }
    return s_max;
}
int main()
{
    //code
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int j = 0; j < N; j++)
        {
            cin >> arr[j];
        }
        cout << s_max(arr, N) << endl;
    }
    return 0;
}