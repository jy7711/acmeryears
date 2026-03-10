#include <stdio.h>

int main()
{
	printf("计算时间差\n请分别输入两组时间，例如“1小时40分”\n");
	
	int hour1,minute1;
	int hour2,minute2;
	scanf("%d %d\n",&hour1,&minute1);
	scanf("%d %d\n",&hour2,&minute2);
	int t1=hour1*60+minute1;
	int t2=hour2*60+minute2;
	int t=t2-t1;
	printf("时间差为%d时%d分",t/60,t%60);
	return 0;
 } 
