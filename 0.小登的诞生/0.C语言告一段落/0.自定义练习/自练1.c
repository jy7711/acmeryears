#include <stdio.h>

int main()
{
    int A=0;
	const int B=100;
	 
    printf("请输入金额（元）");
	scanf("%d",&A);
	int change=B-A;
	printf("找零%d元\n",change); 
	return 0;
}
