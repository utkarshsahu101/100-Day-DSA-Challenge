#include <iostream>
using namespace std;

// #define long long int lli

int main()
{
	//code
	long int T;
	cin >> T;
	while (T--)
	{
		long int N;
		cin >> N;
		long int *p = new long int[N];
		for (int i = 0; i < N; i++)
			cin >> p[i];
		long int X, count;
		count = 0;
		cin >> X;
		for (int i = 0; i < N; i++)
			if (p[i] <= X)
				count++;
		cout << count << endl;
	}
	return 0;
}