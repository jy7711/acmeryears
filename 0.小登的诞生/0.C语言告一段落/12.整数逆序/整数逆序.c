#include <stdio.h>
int main()
{
	int x=12345;
	int a=0;
	int b=0;
	while (x>0){
	a=x%10;
	b=10*b+a;	
	printf("x=%d,a=%d,b=%d\n",x,a,b);
	x/=10;	
	}
	printf("%d",b);
	return 0;
}
