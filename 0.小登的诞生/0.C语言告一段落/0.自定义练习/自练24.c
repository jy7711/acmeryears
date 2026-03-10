#include <stdio.h>
int main ()
{
	int n = 15;
	int i;
//	while (n!=0) {
	for (i=2; i*2<=n ; i=i*2);
	n -= i;
	printf("%d", n);
	for (i=2; i*2<=n ; i=i*2);
	n -= i;
	printf("%d", n);
//   }
	return 0;
}
