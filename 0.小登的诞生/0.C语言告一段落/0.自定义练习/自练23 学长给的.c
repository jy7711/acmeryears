#include <stdio.h>
#include <string.h>
int main()
{
    char a[5];
    scanf("%s", &a);
    printf("%d\n", strlen(a));
    int i = 0;
    for (; i < strlen(a); i++)
        printf("%c ", a[i]);
    printf("\n");
    for ( i = strlen(a) - 1; i >= 0; i--)
        printf("%c", a[i]);
}
