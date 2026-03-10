#include <stdio.h>
int main()
{
	const HAOGANDU=80;
	double haogan=0;
	printf("请输入当前对象好感度："); 
	scanf("%lf",&haogan);
	printf("当前对象好感度为%f。\n",haogan);
	if (haogan>=HAOGANDU)
    printf("恭喜脱单！");
    else {printf("还是...做不到吗\n");
	printf("大侠请重新来过"); }
	return 0;
}
