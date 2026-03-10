#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n, m;
	int c1 = 0, c2 = 0;
	cin >> n >> m;
	vector<int> a(n+1,0) , b(n+1,0); 
	for (ll i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		
		a[x]++; b[y]++; 
		if (a[x] == 1) c1++;
		if (b[y] == 1) c2++;
		
		if (n > c1 && n > c2) {
			cout << (n-c1)*(n-c2)%(1000000000+7) << endl;
		}
		else cout << 0 << endl;
	}
	return 0;
}
