#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;int cnt = 0;
	scanf("%d", &n);
	if (n<1 || n>100000) return 0;
	int a[n] = {0};
	for (int i = 0; i<n ;i++) {
		scanf("%d", &a[i]);
		for (int j=i-1;j>=0;j--) {
			if (a[i] == a[j]) {
				cnt++;
				break;
			}
		} 
	}
	printf("%d\n",n-cnt);
	return 0;
}
