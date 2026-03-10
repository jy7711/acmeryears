#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a, b, c, d, e, f;
	cin >> a >> b;
	//求出c 
	int a1, b1;
	stringstream a0(a),b0(b);
	a0 >> a1; b0 >> b1;
	int c1 = a1 + b1;
	//c1转化字符组
	stringstream l(f);
	l << c1;
	f = l.str(); 
	//进行去0 
	for (int i = 0 ; i < 10 ; i++) {
		if (a[i] != '0') {
			c += a[i];
		}
	}
	for (int i = 0 ; i < 10 ; i++) {
		if (b[i] != '0') {
			d += b[i];
		}
	}
	for (int i = 0 ; i < 10 ; i++) {
		if (f[i] != '0') {
			e += f[i];
		}
	}
	//求a+b去0 , c转化数字 
	int a2, b2;
	stringstream a3(c),b3(d);
	a3 >> a2; b3 >> b2;
	int c2 = a2 + b2;//c2是a+b去0 
	int c3;
	stringstream c4(e);
	c4 >> c3;
	//判断c去0是否等于a+b去0 
	if (c2 == c3) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
