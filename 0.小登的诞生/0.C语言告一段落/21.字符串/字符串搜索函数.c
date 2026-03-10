#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char s[] = "hello";
	char *p  = strchr(s, 'l');
	char *t  = (char*)malloc(strlen(p)+1);
	strcpy(t, p); 
	printf("%s\n", t);
	free(t);
}
