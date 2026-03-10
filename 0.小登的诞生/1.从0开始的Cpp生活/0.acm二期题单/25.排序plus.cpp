#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	vector<int> a(n,0); 
	for (int i = 0; i < n ; i++) {
		scanf("%d", &a[i]);
	}
	sort(a.begin(),a.end());
	for (int i = 0; i < n ; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}
