#include <stdio.h>
#include <string.h>
int main()
{
	int t,i,y;
	int x = 1000;
	scanf("%d" , &t);
	for (i=0; i<t ;i++) {
		char word[x];
		scanf("%s", word);
		for (y=strlen(word)-1 ; y>=0 ; y-- ) {
			printf("%c", word[y]);
		}
	printf("\n");
	}
	return 0;
}
