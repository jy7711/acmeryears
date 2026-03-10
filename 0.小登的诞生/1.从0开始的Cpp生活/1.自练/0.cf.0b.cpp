#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
		int n, rk, ck, rd, cd;
		cin >> n >> rk >> ck >> rd >> cd;
		int r, c;
		
		if (rk > rd) r = n - rk;
		else if (rk == rd) r = 1;
		else r = rk;
		
		if (ck > cd) c = n - ck;
		else if (ck == cd) c = 1;
		else c = ck;
		
		cout << (r+c == 0 ? 1 : r+c) << '\n'; 
	}
	return 0;
} 
