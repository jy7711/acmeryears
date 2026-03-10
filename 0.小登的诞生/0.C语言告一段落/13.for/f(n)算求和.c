#include <stdio.h>
int main()
{
	//f(n)=1+1/2+1/3+...+1/n
	printf("f(n)=1+1/2+1/3+...+1/n\n");
	int i;
	int n;
	double sum=0.0;
	int sign=1;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		sum+=sign*1.0/i;
		sign=-sign;
	}
	printf("f(%d)=%f",n,sum);
	return 0;
}
