#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n, cnt = 0;
	cin >> n;
	bitset<32> bt(n);
	for (int i = 0; i < bt.size(); i++) {
		if (bt[i] == 1) cnt++;
		//cout << bt[i];
	}
	cout << cnt << "\n";
	
	return 0;
} 
