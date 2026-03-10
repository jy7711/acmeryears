#include <stdio.h>
int main()
{
	int n;
	int i=1;
	int fact=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {fact*=i;}
	printf("%d!=%d",n,fact);
	return 0;
}
