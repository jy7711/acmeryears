#include <stdio.h>
int main() 
{
	int t,i,x;
	i=0;
	scanf("%d\n",&t);
	do {
		i++;
		scanf("%d",&x);
		x/=10;
		switch ( x ){
			case 10 :
			case 9  :
				printf("A\n");
				break;
			case 8  :
				printf("B\n");
				break;
			case 7  :
				printf("C\n");
				break;
			case 6  :
			    printf("D\n");
				break;
			default :
			    printf("E\n");	  
		} 
	} while (i<=t);
	return 0;
}
