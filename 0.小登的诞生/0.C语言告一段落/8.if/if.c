#include <stdio.h>
int main()
{
	int hour1,hour2,minute1,minute2;
	scanf("%d %d\n%d %d",&hour1,&minute1,&hour2,&minute2);
	int H=hour2-hour1,M=minute2-minute1;
	if (M<0) {
		H=H-1;
		M=M+60;
	}
	printf("时差为%d小时%d分钟",H,M);
	return 0;
}
