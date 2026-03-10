#include <stdio.h>

int main()
{
    int price=0,property=0;
    
	printf("请输入金额（元）");
	scanf("%d",&price);
	
	printf("请输入付款（元）");
	scanf("%D",&property);
	
	int change=property-price;
	
	printf("找零%d元\n",change);
	
	return 0;

}
