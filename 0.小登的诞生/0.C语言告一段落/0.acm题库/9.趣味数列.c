#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d %d",& n,& a);
	int Sn = 0;
	int cnt = 1;
	int b = 0; 
	for (;cnt<=n;cnt++) {
		b = a + b;
		a *= 10;
		Sn = Sn + b;
	}
	printf("%d", Sn);
	return 0;
 } 
