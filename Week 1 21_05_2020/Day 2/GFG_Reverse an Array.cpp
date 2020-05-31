#include <iostream>
using namespace std;

int main()
{
    //code
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        int *p = new int[N];
        for (int i = 0; i < N; i++)
            cin >> p[i];
        for (int i = N - 1; i >= 0; i--)
            cout << p[i] << " ";
        cout << endl;
        delete[] p;
        p = nullptr;
    }
    return 0;
}