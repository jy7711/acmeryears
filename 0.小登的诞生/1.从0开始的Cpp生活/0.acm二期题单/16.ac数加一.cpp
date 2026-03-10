#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for (int j = 0; j < t ; j++) {
		long long n;
		cin >> n;
		int cnt = 0;
		while (n != 0) {
			n = n&(n-1);
			cnt ++;
		}	
		cout << cnt << endl;
	}
	return 0;
}
