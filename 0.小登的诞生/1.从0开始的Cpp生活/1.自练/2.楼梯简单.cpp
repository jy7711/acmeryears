#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	int cnt = 0; 
	cin >> n;
	int i = n;
	while (n > 0 ) {
		cnt++;
		n -= 2;
		if (n == 0) cnt++;
	}
	cout << cnt;
	return 0;
 } 
