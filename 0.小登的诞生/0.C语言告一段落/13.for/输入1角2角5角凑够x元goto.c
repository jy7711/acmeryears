#include <stdio.h>
int main()
{
//输入1角2角5角凑够x元 
	int one,two,five;
	int x;
	scanf("%d",&x);
	for (one=1;one<x*10;one++){
		for(two=1;two<x*10/2;two++){
			for(five=1;five<x*10/2;five++){
				if (one*1+two*2+five*5==x*10) {
					printf("%d个1角%d个2角%d个5角能凑够%d元\n",one,two,five,x);
//goto不建议用 
					goto out;
				}	
			} 
		}
	}
	out:
	return 0; 
 } 
