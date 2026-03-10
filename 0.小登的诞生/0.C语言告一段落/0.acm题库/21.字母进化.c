#include <stdio.h>
#include <string.h>
int main()
{
	//Ó¢ÎÄ×ÖÄ¸ Ð¡Ð´a 97-122 z ´óÐ´ A 65-90 Z  
	//Z --> a  z --> A
	int n;
	scanf("%d" , &n);
    char word[n];
	scanf("%s", word);
	int i = 0;
	for (i=0 ; i< n ; i++) {
		if (word[i] == 'Z') {
			word[i] += 7; 
		}
		else if (word[i] == 'z') {
			word[i] -= 57;
		}
		else if ('A'<=word[i] && word[i]<'Z' || 'a'<=word[i] && word[i]<'z') {
			word[i] +=1;
		}
		else {
			word[i]; 
		}
		printf("%c", word[i]);
    }
	return 0;
}
