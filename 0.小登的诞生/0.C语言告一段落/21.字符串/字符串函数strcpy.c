#include <stdio.h>
#include <string.h>

char* mycpy(char* dst, const char* src)
{
	/*
	int idx = 0;
	while (src[idx]) {
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '0';
	*/
	char* ret = dst;
	while (*dst++ = *src++);
	*dst = '0';
	return ret;
}

int main()
{ 
	char s1[] = "abc";
	char s2[] = "abc";
	strcpy(s1,s2);
	return 0;
} 
