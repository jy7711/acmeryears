#include <stdio.h>

int main()
{
	int a,b;
	printf("请输入任意两个数\n");
	scanf("%d %d",&a,&b);
	
	double c=(a+b)/2.0;
	printf("%d和%d的平均数为%f",a,b,c);
	return 0;
}
