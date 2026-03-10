#include <stdio.h>

int main()
{
	
    printf("请输入身高所对应的英尺和英寸\n");
	double inch;
	double foot;
	scanf("%lf %lf",&foot,&inch);
	printf("身高为%f米",(foot+inch/12)*0.3048); 
	return 0;
 } 
