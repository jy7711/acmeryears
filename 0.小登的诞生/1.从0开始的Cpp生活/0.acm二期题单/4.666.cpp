#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int t, i, m, n, x=0;
	char a[2000];
	
	cin >> t;
	
	if ( t < 1 || t > 1000 ) return 0;
	
	for (m = 0 ; m < t ; m++) {
		scanf("%s", &a);
		n = strlen(a);
	//4x35x6	
	for (i = 0 ; i < n-1 ; i++) {
		cout << 4 ;
	}
	cout << 3;
	for (i = 0 ; i < n-1 ; i++) {
		cout << 5 ;
	}
	cout << 6 << endl;
    }
	return 0;
}
