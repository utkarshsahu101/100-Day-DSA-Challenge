// #include<iostream>
// using namespace std;

// int func(int a, int b){
//     if(a%b==0)
//     {
//         if(a>=0)
//             return b+a;
//         else
//             return -(b-a);
//     }
//     else
//     {
//         if(a>=0)
//         {
//             int y=a%b;
//             int x=b-y;
//             if( y<x )
//                 return a-y;
//             else
//                 return a+x;

//         }
//         else
//         {
//             int y=a%b;
//             int x=b+y;
//             if( x>y )
//                 return a-x;
//             else
//                 return a+y;
//         }
//     }
// }

// int main()
//  {
// 	//code
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n, m;
// 	    cin>>n>>m;
// 	    cout<<func(n, m)<<endl;
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;

// int func(int a, int b){
//     if(a%b==0)
//     {
//         if(a>=0)
//             return b+a;
//         else
//             return -(b-a);
//     }
//     else
//     {
//         if(a>=0)
//         {
//             int y=a%b;
//             int x=b-y;
//             if( y<x )
//                 return a-y;
//             else
//                 return a+x;

//         }
//         else
//         {
//             int y=a%b;
//             int x=b+y;
//             if( x <= abs(y) )
//                 return a-x;
//                 // return a+y;
//             else
//                 return a-y;
//                 // return a-x;
//         }
//     }
// }

// int main()
//  {
// 	//code
// 	int t;
// 	cin>>t;
// //   int i=1;
// 	while(t--){
// 	    int n, m;

//     //   cout<<"test "<<i<<endl;
// 	    cin>>n>>m;

// 	   // cout<<"Result-:"<<func(n, m)<<endl;
// 	   cout<<func(n, m)<<endl;
//     //   i++;
// 	}
// 	return 0;
// }

#include <iostream>
using namespace std;

int func(int a, int b)
{
    if (a % b == 0)
    {
        // if(a>=0 || b<0)
        //     return abs(b)+a;
        // else
        //     return -(b-a);

        // if( (a>=0 && b>0) || (a<0 && b<0) )
        //   return a+b;
        // // if( (a>=0 && b<0) || (a<0 && b>0) )
        // else
        //   return a-b;

        return a;
    }
    else
    {
        if (a >= 0)
        {
            int y = a % b;
            int x = abs(b) - y;
            if (y < x)
                return a - y;
            else
                return a + x;
        }
        else
        {
            int y = a % b;
            int x = abs(b) + y;
            if (x <= abs(y))
                return a - x;
            // return a+y;
            else
                return a - y;
            // return a-x;
        }
    }
}

int main()
{
    //code
    int t;
    cin >> t;
    //   int i=1;
    while (t--)
    {
        int n, m;

        //   cout<<"test "<<i<<endl;
        cin >> n >> m;

        cout << func(n, m) << endl;
        //   i++;
    }
    return 0;
}