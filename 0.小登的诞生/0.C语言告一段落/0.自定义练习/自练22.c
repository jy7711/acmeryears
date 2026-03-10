#include <stdio.h>
void swap(int a, int b)
{
	int t = a;
	a = b;
    b = t;
    printf("%d %d", a , b);
} 
int main()
{
	int c,d;
	c = 5;
	d = 6;
	swap(c,d);
	
	return 0;
}
