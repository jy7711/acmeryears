/*
构造n以内素数表
 1.开辟prime[n],初始化其所有元素为1，prime[x]为1
 表示x是素数
 2.令x=2
 3.如果x是素数，则对于(i=2;x*i<n;i++)令prime[i*x]=0
 4.令x++，如果x<n ,重复3，否则结束 
*/
#include <stdio.h>
int main()
{
	const int maxNumber = 25;
	int isPrime[maxNumber]; 
	int i;
	int x;
	for (i = 0; i < maxNumber; i++) {
		isPrime[i] = 1;
	} 
	for ( x=2;x <maxNumber; x++ ) {
		if (isPrime[x]) {
		    for ( i=2; i*x<maxNumber; i++) {
		    	isPrime[i*x] = 0;
			}
		}
	}
	for ( i=2; i<maxNumber; i++) {
		if ( isPrime[i] ) {
			printf("%d\t", i);
		}
	}
	printf("\n");
	return 0;
}
