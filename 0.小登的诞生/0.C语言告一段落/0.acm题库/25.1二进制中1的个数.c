#include <stdio.h>
int main()
{
	int n;
	int i = 0;
	int cnt = 0; 
	scanf("%d", &n);
	for (;i<=32;i++) {
		while (n != 0) {
			n = n&(n-1);
			cnt ++;
		}	
	}
	printf("%d" , cnt);
	return 0;
}
