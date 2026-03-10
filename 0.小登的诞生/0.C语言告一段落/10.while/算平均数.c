#include <stdio.h>
int main()
{
	int number;
	int sum=0;
	int count=0;
	while (number!=-1){

	sum+=number;
	count++;
	scanf("%d",&number);}
	printf("平均数为%f",1.0*sum/(count-1));
	return 0;
}
