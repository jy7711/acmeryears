#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n, a, b, c, d;
	cin >> n;
	c = n/3;
	d = n%3;
	if (d == 1) {
		a = c + 1;
		b = c; 
	}
	else if (d == 2) {
		a = c;
		b = c + 1;
	}
	else {
		a = c;
		b = c;
	}
	cout << a << " " << b;
	return 0;
}
