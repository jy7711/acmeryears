#include <stdio.h>
#include <string.h>

int mycmp(const char* s1,const char* s2)
{
/*	int idx = 0;
	while (s1[idx] == s2[idx] && s1[idx] != '\0') {
		idx++;
	}
*/
    while (*s1 == *s2 &&  *s1 != '\0' ) {
    	s1++;
    	s2++;
	}
	return *s1 - *s2;
	////如果有连续多个不一样，循环在结束前第一个不一样的位置停止，*s1-*s2=结束时那一位的差值 
}
int main(int argc, char const *argv[])
{
	//  0: s1 == s2   ,  1: s1 > s2   , -1: s1 < s2
	char s1[] = "Shinonome";
	char s2[] = "emononihS";
	
	printf("%d\n", mycmp(s1,s2)); 
	printf("%d\n", 'a'-'A');
	
 } 
