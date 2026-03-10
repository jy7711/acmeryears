#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int a, b;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		int c = a + b;
		if (c >= 1024) c -= 2048;
		if (c < -1024) c += 2048;
		cout << c << endl;
	}
	return 0;
 } 
