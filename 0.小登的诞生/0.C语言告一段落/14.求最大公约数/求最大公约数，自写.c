#include <stdio.h>
int main()
{
	//求最大公约数（自写版） 
	int a,b;
    scanf("%d %d",&a,&b);
	int c,d; 
	int t;
	if (a<b)
	t=a;
	else t=b;
	for (c=1;c<=t;c++){
	//枚举，不输出则一直进行到c=t,输出循环中最后的d 
		if (a%c+b%c==0)
		d=c;
		}	 	
	printf("最大公约数为%d\n",d);
	return 0;
}
