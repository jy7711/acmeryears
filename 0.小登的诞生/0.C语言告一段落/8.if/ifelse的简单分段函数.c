#include <stdio.h>
int main()
{
	double x;
	scanf("%lf",&x);
	if (x<0) {printf("f=-1");}
	else if (x==0) {printf("f=0");}
	else printf("f=2*%f=%f",x,2*x);
	return 0;
}
