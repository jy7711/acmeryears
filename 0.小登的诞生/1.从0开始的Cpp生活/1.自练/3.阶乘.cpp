#include <stdio.h>
int J(int &a, int &b)
{
	int ret = 1;
	if (a==0 || b == 0) return ret;
	int i,ax,bx,abx;
	for (i=a;i>0;i--)     ax *= i;
	for (i=b;i>0;i--)     bx *= i;
	for (i=a+b;i>0;i--)   abx *= i;
	ret = abx/ax/bx;
	return ret; 
}
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	int i,ax=1,bx=1,abx=1;
	for (i=a;i>0;i--)     ax *= i;
	for (i=b;i>0;i--)     bx *= i;
	for (i=a+b;i>0;i--)   abx *= i;
	printf("%d %d %d", ax, bx, abx);
	return 0;
}
