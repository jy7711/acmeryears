#include <stdio.h>
int main()
{
	int price=0,bill=0;
	printf("请输入金额：");
	scanf("%d",&price);
	printf("请输入票面：");
	scanf("%d",&bill); 
	if (bill<price) {printf("没钱你买什么东西。");} 
	if (bill>price) {printf("找您%d元，欢迎下次光临！",bill-price);}
	if (bill==price) {printf("可以了，您慢走。");} 
	return 0;
	
 } 
