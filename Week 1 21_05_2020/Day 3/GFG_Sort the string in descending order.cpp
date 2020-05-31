// #include <iostream>
// using namespace std;

// int main() {
// 	//code
// 	int t;
// 	cin>>t;
// 	getchar();
// 	while(t--){
// 	    string s;
// 	    getline(cin, s);
// 	    char arr[26]={0};
// 	    for(int i=0;i<s.length();i++){
// 	        arr[s[i]-'a']++;
// 	    }
// 	    for(int i=25;i>=0;i--){
// 	        for(int j=0;j<arr[i];j++){
// 	            cout<<(char)('a'+i);
// 	        }
// 	    }
// 	    cout<<endl;
// 	}
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, M, i, j;
    cin >> T;
    string s;
    string op;
    getchar();

    while (T--)
    {
        getline(cin, s);

        int count[26] = {0};
        for (i = 0; i < s.length(); i++)
        {
            count[s[i] - 97]++;
        }

        for (i = 25; i >= 0; i--)
        {
            while (count[i]--)
            {
                cout << char(i + 97);
            }
        }

        cout << "\n";
    }
    return 0;
}