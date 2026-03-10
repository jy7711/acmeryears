#include <stdio.h>
#include <math.h>

int main()
{
    int t,i;
    int x1,y1,x2,y2;
    scanf("%d", &t);
    for (i=0; i<t; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        double d1 = x1 - x2;
        double d2 = y1 - y2;
        long long d  = sqrt(d1*d1 + d2*d2);
        printf("%lld\n", d);
    } 
    return 0; 
}
