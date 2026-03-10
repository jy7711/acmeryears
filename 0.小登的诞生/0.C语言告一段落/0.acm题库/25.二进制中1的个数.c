#include <stdio.h>
int main()
{
	int n;
	int y = 0;
	scanf("%d", &n); 
	if (n < 0 ) {
		n = - n;
		y = 1; 
	} 
	int i;
	int cnt = 0;
	while (n != 0) {
		for (i=1; i*2<=n; i*=2);
		cnt++;
		n -= i;
	} 
	if (y == 0) {
	printf("%d", cnt);
	} else {
	printf("%d", 32-cnt);
	}
	return 0;
}
