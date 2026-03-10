#include <stdio.h>
int main()
{
	int range = 100;
	for (range=999;range>=100;range--) {
		int a = range / 100;
		int b = range / 10 ;
		b %= 10 ;
		int c = range % 10 ; 
		a = a*a*a;
		b = b*b*b;
		c = c*c*c; 
		if (range == a+b+c ) {
		printf("%d\n",range); 
	    }
	}
	return 0;
}
