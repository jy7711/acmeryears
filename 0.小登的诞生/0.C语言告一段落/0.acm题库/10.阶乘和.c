#include <stdio.h>
int main()
{
	int i = 1;
	int n;
	long long int sum = 0, cnt = 1;
	scanf("%d", &n);
    for (; i <= n; i++) {
        cnt *= i;
        sum += cnt;
    }
    printf("%lld\n", sum);
    return 0;
 } 
