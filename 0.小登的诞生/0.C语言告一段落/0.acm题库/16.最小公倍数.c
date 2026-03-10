#include <stdio.h>
int main()
{
	long long a,b,c,d;
	long long g;
	long long t; 
	int cnt;
	int i = 1;
	scanf("%d",& cnt);
	for (;i <= cnt; i++) {
    scanf("%lld %lld",&a,&b);
    c = a;
    d = b;
	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	g = c*d/a;
	printf("%lld\n", g);
}
	return 0;
}
