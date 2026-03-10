#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char a[n] = {0};
	cin >> a;
	for (int i = 0; i < strlen(a) ; i++ ) {
	    if (a[i] == 'A') a[i] = 'T';
	    else if (a[i] == 'T') a[i] = 'A';
	    else if (a[i] == 'C') a[i] = 'G';
		else if (a[i] == 'G') a[i] = 'C';
		
		cout << a[i]; 
    }
    //cout << a[n+1];
	return 0;
}
