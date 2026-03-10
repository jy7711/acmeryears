#include <stdio.h>
#include <string.h>

int main()
{
    int i, t, m, j;
    int n = 0;
    scanf("%d", &n);
    char a0[257] = "Shinonome";
    int a1[257] = {0}; 
    char a[257]; 
    for (i = 0; a0[i] != '\0'; i++) {
        unsigned char c = a0[i];
        a1[c]++;
    }
    for (t = 0; t < n; t++) {
        int a2[257] = {0}; 
        scanf("%9s", a); 
        for (i = 0; a[i] != '\0'; i++) {
            unsigned char d = a[i];
            a2[d]++;
        }
        int j = 1;
        for (m = 0; m < 257; m++) {
            if (a1[m] != a2[m]) {
                j = 0;
                break;
            }
        }
        if (j == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
