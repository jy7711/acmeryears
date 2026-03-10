#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
		bool j = 0;
		int n; cin >> n; long long sum = 0;
		vector<int> a; vector<int> b;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			if (x%2 == 0) {
			    a.push_back(x);
			    sum += x;
			}
			else { b.push_back(x); j = 1; }
		}
		if (!j) { cout << 0 << '\n' ; continue; }
		else {
			sort(b.begin(),b.end());
			for (int i = b.size()/2; i < b.size(); i++) sum+=b[i];
			cout << sum << '\n';
		}
	}
	return 0;
}
