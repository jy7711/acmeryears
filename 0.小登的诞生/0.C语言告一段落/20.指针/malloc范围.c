#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	void *p;
	int cnt = 0;
    // p=malloc(100*1024*1024);
    // p++;
	p = &i;
	free(0);
	return 0;
}
