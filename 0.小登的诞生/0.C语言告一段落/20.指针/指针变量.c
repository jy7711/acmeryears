#include <stdio.h>
//指针变量是记录地址的变量 
void f(int *p);
void g(int  k);

int main()
{
	int i = 6;
	printf("&i=%p\n",&i);
	//将i的地址交给p 
	f(&i);
	g(i);
	return 0;
} 

void f(int *p)
{
    printf(" p=%p\n",  p);
    printf("*p=%d\n", *p);
    *p = 26; 
} 

void g(int k)
{
	printf("k=%d\n",k);
} 
