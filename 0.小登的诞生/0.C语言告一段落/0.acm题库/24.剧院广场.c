#include <stdio.h>
int main()
{
	int n,m,a;
	scanf("%d %d %d", &n, &m, &a);
	int x = (n+a-1)/a;
	int y = (m+a-1)/a;
	printf("%d\n", x*y);
	return 0;
}
