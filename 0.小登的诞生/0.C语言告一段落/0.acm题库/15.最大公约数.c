#include <stdio.h>
int main()
{
	long long a,b;
	long long t;
	
	int cnt;
	int i = 1;
	scanf("%d",& cnt);
	for (;i <= cnt; i++) {
    scanf("%lld %lld",&a,&b);
	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	printf("%lld\n",a); 
}
	return 0;
}
