#include <bits/stdc++.h> 
using namespace std;
int main()
{
	int n, a, b;
	cin >> n;
	for (int i = 0; i < n ;i++) {
		cin >> a >> b;
		if (a%b == 0) cout << "YES\n";
		else cout << "NO\n"; 
	}
	return 0;
}
