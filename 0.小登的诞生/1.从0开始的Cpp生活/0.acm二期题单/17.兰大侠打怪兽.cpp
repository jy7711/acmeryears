#include <bits/stdc++.h>
using namespace std;
int a, b, c; 
int man(int a,int b,int c) 
{
	int t = 0;
	if (a > b) t = b;
	else t = a;
	if (t > c) t = c;
	return t;
}
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b >>c;
		int d = (a+b+c)%9; 
		int e = (a+b+c)/9;
		int f = man(a,b,c);
		if ( d == 0 && f >= e) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
 } 
