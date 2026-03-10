#include  <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int s[10] = "Shinonome";
	int s1[10] = {0};
	for (i=0; i<n ; i++) {
		int x;
		scanf("%s",&x);
		s1[x] = 1;
	}
	/*for (i=0; i<n ; i++) {
		if(s1[i] == 1) {
			printf("%d",i);
		}
	}*/
	return 0;
 } 
