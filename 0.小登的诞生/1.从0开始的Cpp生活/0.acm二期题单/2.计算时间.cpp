#include <iostream>
#include <cstdio>
int main()
{
	int n;
	scanf("%d", &n);
	int h1,m1,h2,m2;
	for (int i = 0; i < n ; i++) {
	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	int t1 = h1*60 + m1; 
	int t2 = h2*60 + m2;
	int t = 0;
	if (t1 > t2)  t = t2 - t1 + 1440;
	else          t = t2 - t1;
	int h = t/60;
	int m = t%60;
	printf("%d %d\n", h , m); 
    }
	return 0;
}
