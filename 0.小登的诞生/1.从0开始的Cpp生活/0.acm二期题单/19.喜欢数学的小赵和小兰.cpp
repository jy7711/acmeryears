#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	
	cin >> t;
	for (int i = 0; i < t ; i++) {
		int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0; 
		int n; 
		cin >> n;
		for (int j = 0; j < n ; j++) {
			int a = 0;
			cin >> a;
			if (a%2 != 0) cnt1++;
			else cnt2++;
		}
		int m;
		cin >> m;
		for (int j = 0; j < m ; j++) {
			int b = 0;
			cin >> b;
			if (b%2 != 0) cnt3++;
			else cnt4++;
		}
		cout << cnt1*cnt3+cnt2*cnt4 << endl;
	}
	return 0;
}
