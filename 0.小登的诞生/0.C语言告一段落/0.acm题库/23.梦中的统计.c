#include <stdio.h>
#include <string.h>
int main()
{
	int m,n;
	int i,j,k;
	scanf("%d %d", &m, &n);
	int num[10]={0};
	if (m > n) {
		int t = m;
		m = n;
		n = t;
	}
	for (i=m;i<=n;i++) {
		j = i;
		while (j>0) {
			k = j%10;
			num[k]++;
			j /= 10;
		}
	} 
	for (k = 0;k < 10;k++) {
	printf("%d",num[k]);
	if (k<9) printf(" ");
    }
	return 0;
}
