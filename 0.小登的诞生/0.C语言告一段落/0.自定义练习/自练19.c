#include <stdio.h>
int main()
{
    long long int n = 0;
    scanf("%lld", & n);
    int i = 2;
    if (n < 2 ) {
        printf("NO\n"); 
    } 
    if (n == 2) {
        printf("YES\n");
    }
    for (;i < n; i++) {
        if ( n%i == 0 ) {
            printf("NO\n");
            break; 
        }
        else {
        printf("YES\n");
        }
       
    }
    return 0;    
}
