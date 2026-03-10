#include <iostream>
#include <cstdio>
using namespace std;

int J(int &a, int &b)
{
	long long ret = 1; int i = 1; int t = 0;
	if (a==0 || b == 0) return ret;
	if (a>b) t = a;
	else t = b;
	for (;i<=t;i++) {ret=ret*(a+b-i+1)/i;}
	return ret; 
}

int main()
{
	int a;
	int b = 0;
	long long cnt = 0; 
	cin >> a;
	while (a > 0 ) {
		long long c = J(a,b);
		cnt += c;
		a-=2 ; b++ ;
		if (a == 0) cnt++;
	}
	cout << cnt;
	return 0;
 } 
