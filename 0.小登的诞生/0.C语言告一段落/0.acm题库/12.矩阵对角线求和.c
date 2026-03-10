#include <stdio.h>
int main()
{
	int x,y,z;
	int sum1 = 0,sum2 = 0;
	int cnt = 1;
	for (;cnt <= 3;cnt++) {
	scanf("%d %d %d",&x,&y,&z);
	if (cnt == 1) {
	    sum1 += x;
		sum2 += z;
	} 
	else if (cnt == 2) {
		sum1 += y;
		sum2 += y;
	} 
	else {
		sum1 += z;
		sum2 += x;
	} 
}
    printf("%d %d", sum1 , sum2);
	return 0; 
 } 
