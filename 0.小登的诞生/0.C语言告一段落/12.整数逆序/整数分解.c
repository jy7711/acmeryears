#include <stdio.h>
int main()
{	
//    13425%10000=3425;
//    13425/10000=1;
//	10000/10=1000
//    3425%1000=425
//    3425/1000=3
//    1000/10=100
	int x=750;
	int d;
	int t=x;
	int cnt=0;
	int mask=1;
	
	while (x>9) {
	x/=10;
	mask*=10;
	}
	printf("%d\n",mask);
	
    
	x=t;
	do{ 
	d=x/mask; 
	x%=mask;
	mask/=10;
	printf("%d",d);
	   if (mask>=1){
		 printf(" ");}
   } while (mask>=1); 
    
}
