#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x = 1;
	for (int i = 1; i < n ; i++) {
		x = (x+1)*2;
	}
	cout << x << endl;
	return 0;
}
