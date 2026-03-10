#include <stdio.h>
int main()
{
	int x;
	int cnt=0; 
	for (x=2;cnt<50;x++){
	int i;
	int isPrime=1;
	for (i=2;i<x;i++) {
		if (x%i==0){isPrime=0;break;}}
	if (isPrime==1){cnt++;printf("%d ",x);}	 
	}
	 
	return 0;
} 
