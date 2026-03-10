#include <iostream>
#include <cstdio>
int main()
{
	int n,i,x;int cnt = 0;
	scanf("%d", &n);
	if (n<1 || n>100000) return 0;
	const int num = 160000;
	int a[num] = {0};
	for (i=0;i<n;i++) {
		scanf("%d", &x);
		a[x+80000]++;
		if(a[x+80000] == 2) {
			a[x+80000]--;
			cnt++;
		}
	}
	printf("%d", n-cnt);
	return 0;
 } 
