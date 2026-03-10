#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	if (n < 60) {
		cout << "QWQ\n";
		return 0;
	}
	else {
		double a = 0.5*n + 0.2*m + 0.2*x + 0.1*y;
		if (a >= 60) cout << "YES\n";
		else cout << "QWQ\n";
	}
	return 0;
}
