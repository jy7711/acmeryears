#include <stdio.h>

int main()
{
	
    printf("请输入身高对应的英尺和英寸，" 
	        "如输入\"5 7\"表示5英尺7英寸：");
    double inch;
	double foot;
	scanf("%lf %lf", &inch, &foot);

	printf("身高为%f米\n",(inch+foot/12.0)*0.3048);
	return 0;
 } 
