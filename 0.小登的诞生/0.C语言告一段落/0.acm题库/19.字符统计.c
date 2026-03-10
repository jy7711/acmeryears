#include <stdio.h>

int main()
{
//	65<=word<=90 || 97<=word<=122
	char word;
	int a,b,c,d;
	a=0; b=0; c=0; d=0;
	while ( (word = getchar()) == '\n' && word != EOF) {
		if ('A'<=word && word<='Z' || 'a'<=word && word<='z') {
	    	a++;
	    }
	    else if ('0'<=word && word<='9') {
	    	c++;
		}
		else if ( word == ' ') {
			b++;
		}
	    else {
		d++;
	    }
    }
    printf("%d %d %d %d",a,b,c,d);
    return 0;
}
