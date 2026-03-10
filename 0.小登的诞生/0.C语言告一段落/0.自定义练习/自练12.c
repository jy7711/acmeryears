#include <stdio.h>
int main()
{
	int a=0,t=0;
	scanf("%d",&a);
	a=t;
	
	int cnt=0;
	for (a=t;a>=1;a/=10) {
		cnt++;
	}
	printf("%d",cnt);
	a=t; 
	
/*	int b;
	while (a>=1) {
		a%=10;
		b=a;
		printf("%d",b);
		if (a>1) {
			printf(" ");
		}
	} a=t;
	
	int c,d=0;
	do {
		a%=10;
		c=a;
		d=10*d+c;
	} while (a>1);
	printf("%d",d);*/
	return 0;
}
