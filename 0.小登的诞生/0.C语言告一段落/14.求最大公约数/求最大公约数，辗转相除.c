//求最大公约数 *辗转相除法
/*1.如果b=0,计算结束，a就是最大公约数；
  2.否则，计算a%b,令a=b,b=a%b;
  3.回到第一步。
a   b   t
12  18  12
18  12  6
12  6   0
6   0
*/
#include <stdio.h>
int main()
{
	int a,b;
	int t;
	scanf("%d %d",&a,&b);
	while (b!=0) {
		t=a%b;
		a=b;
		b=t;
	}
	printf("gcd=%d\n",a); 
	return 0;
}
