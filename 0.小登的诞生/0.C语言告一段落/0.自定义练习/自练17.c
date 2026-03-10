#include <stdio.h>
void max(int a, int b) {
	int ret = 0;
	if (a > b) {
		ret = a;
	}
	else { 
	ret = b; }
	printf("%d", ret); 
    
} 

int main()
{
	
	max(10,12);
	
	return 0;
}
