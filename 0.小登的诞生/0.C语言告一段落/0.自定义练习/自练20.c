#include <stdio.h>
int main()
{
	long long int number[10];
	int cnt = 0;
	
	for (; cnt < 10;) {
		scanf("%lld",& number[cnt]);
	    cnt++;
	}
	
	for (cnt = 9;cnt >= 0;) {
		printf("%lld ", number[cnt]);
		cnt--;
	}
	return 0;
}
