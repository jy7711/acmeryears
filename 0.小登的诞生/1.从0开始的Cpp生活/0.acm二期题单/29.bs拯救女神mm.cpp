#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t; 
	cin >> t;
	for (int i = 0; i < t ; i++) {
		ll n;
		cin >> n;
		ll m = n / 2;
		ll l = n / 4;
		int a = sqrt(m);
		int b = sqrt(l);
		if (n < 2 || n%2 != 0) cout << "NO\n";
		else if (a*a == m && n%2 == 0) cout << "YES\n";
		else if (b*b == l && n%4 == 0) cout << "YES\n";
		else cout << "NO\n";
	} 
	return 0;
}
