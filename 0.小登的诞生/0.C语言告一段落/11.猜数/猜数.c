#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int number= rand()%100+1;
	int count=0;
	int a=0;
	printf("我已经想好了一个1到100之间的数。\n");
	printf("这个数为%d\n",number); 
	do { 
	printf("请猜这个1到100之间的数:");
	scanf("%d",&a);
	count ++;
	if (a>number) {printf("这个数大了。\n");}
	else if (a<number) {printf("这个数小了。\n");} 
	} while (a!=number);
	printf("你用%d次猜中了答案。\n",count); 
	return 0;
}
