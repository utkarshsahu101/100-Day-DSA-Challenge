#include <iostream>
using namespace std;

int main()
{
    //code
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        int i = 0;
        while (i < s.size())
        {

            if (s[i] == ' ')
            {
                i++;
                if (s[i] >= 'a' && s[i] <= 'z' && s[i] != ' ')
                {
                    s[i] -= 32;
                }
                else
                {
                    continue;
                }
            }
            i++;
        }
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            s[0] -= 32;
        }
        cout << s << endl;
    }

    return 0;
}