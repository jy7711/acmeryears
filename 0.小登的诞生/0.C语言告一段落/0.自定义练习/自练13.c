#include <stdio.h>
#include <string.h>
int main()
{
    int i =0; 
	char a[5];
    scanf("%s", &a);
    printf("%d\n", strlen(a));
    for (i = 0; i < strlen(a); i++)
        printf("%c ", a[i]);
    printf("\n");
    for (int i = strlen(a) - 1; i >= 0; i--)
        printf("%c", a[i]);
}
