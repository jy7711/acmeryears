#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n; cin >> t;
	while (t--) {
		cin >> n;
		map<int,int> mp;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			mp[x]++;
		}
		int cnt = 0;
		for (auto &ele : mp) {
			if (ele.second != 0) cnt++; 
		}
		cout << cnt*2-1 << '\n';
    }
	return 0;
 } 
