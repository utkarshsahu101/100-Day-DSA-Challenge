// // #include <iostream>
// // #include<string>
// // #include<bits/stdc++>
// #include<bits/stdc++.h>
// using namespace std;

// void check(string &s1, string &s2){
//     sort(s1.begin(),s1.end());
//     sort(s2.begin(),s2.end());
//     if(!s1.compare(s2))
//         cout<<"YES"<<endl;
//     else
//         cout<<"NO"<<endl;
// }

// int main() {
// 	//code
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    string s1,s2;
// 	    cin>>s1>>s2;
// 	    check(s1,s2);
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int flag = 0;
        int A[256] = {0};
        if (a.length() != b.length())
            cout << "NO" << endl;
        else
        {
            for (int i = 0; i < a.length(); i++)
            {
                A[a[i]] = 1;
            }
            for (int i = 0; i < b.length(); i++)
            {
                if (A[b[i]] != 1)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}