#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n;
	cin >> n;
	ll fenzu, pailie, zhanfa;
	ll fenzu1 = 1, fenzu2 = 1;  int j = n/2;
	for (int i = n; i > n/2 ; i--) {
		fenzu1 *= i;
		fenzu2 *= j;
		j--;
	}
	j = n/2;	
	fenzu = fenzu1/fenzu2/2;
	pailie = (fenzu2 / j)*(fenzu2 / j);
	zhanfa = fenzu*pailie;
	cout << zhanfa;
	return 0;
}
