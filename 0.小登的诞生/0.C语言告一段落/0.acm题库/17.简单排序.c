#include <stdio.h>
int main()
{
	int f[10];
	int i;
	for (i = 0 ; i < 10 ; i++) {
		scanf("%d", &f[i] );
	}
	int b,t=0;
	for (i=0; i < 9 ;i++) { 
		for (b=0; b < 9-i ; b++) {
			if ( f[b] > f[b+1] ) {
				   t = f[b];
				f[b] = f[b+1];
				f[b+1] = t;
			}
		}
	} 
	for (i=0;i < 10; i++) {
		printf("%d", f[i] );
		if (i < 9) {
			printf(" ");
		}
	}
	return 0;
}
