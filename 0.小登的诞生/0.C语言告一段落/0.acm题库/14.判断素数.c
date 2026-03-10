#include <stdio.h>
int main()
{
	int x = 0;
	long long int n = 0;
	scanf("%lld", & n);
	long long i = 2;
	if (n < 2 ) {
	    x = 0; 
	} 
	if (n == 2) {
		x = 1;
	}
	if (n == 3) {
		x = 1;
	}
	for (long long i = 2; i*i <= n; i++) {
		if ( n%i == 0 ) {
			x = 0;
			break;
		}
		else {
		x = 1;
		} 
	}
	if (x == 1) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;	
}
