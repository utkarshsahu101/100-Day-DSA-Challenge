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
        long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int min = a[0];
        int max = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
            }
            if (a[i] > max)
            {
                max = a[i];
            }
        }
        cout << min << " " << max << "\n";
    }
    return 0;
}