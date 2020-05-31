#include <iostream>
#include <string>
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
        string s;
        // s.resize(n);
        int flag = 1;
        cin >> s;
        // cout<<s;
        for (int i = 0, j = s.size() - 1; i < s.size() / 2; i++, j--)
        {
            if (s[i] != s[j])
            {
                flag = 0;
                break;
                //  cout<< "continue";
            }
            // else
            //   flag=0;
        }
        if (flag == 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}