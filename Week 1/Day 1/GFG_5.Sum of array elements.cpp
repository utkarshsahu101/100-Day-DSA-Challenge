#include <iostream>
using namespace std;

int main()
{
    //code
    int T;
    cin >> T;
    int sum[T];
    for (int i = 1; i <= T; i++)
    {
        int size;
        cin >> size;
        int *arr = new int[size];
        for (int j = 0; j < size; j++)
        {
            cin >> arr[j];
        }
        int s = 0;
        for (int j = 0; j < size; j++)
        {
            s += (arr[j]);
        }
        sum[i] = s;
    }
    for (int i = 1; i <= T; i++)
        cout << sum[i] << endl;
    return 0;
}