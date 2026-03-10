#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n] = {0};
	for (int j = 0; j < n; j++) {
		cin >> a[j];
	}
	int x;
	cin >> x; 
	if (x > a[n-1]) {
		cout << n + 1 << endl;
		return 0;
	}
	for (int i = 1; i < n; i++) {
		if (x <= a[i-1]) {
			x = i;
			cout << x << endl;
			return 0;
		} 
		else if (x > a[i-1] && x <= a[i]) {
			x = i + 1;
			cout << x << endl;
			return 0;
		}
	}
	if (n == 1) {
		cout << 1 << endl;
	}
	return 0;
 } 
