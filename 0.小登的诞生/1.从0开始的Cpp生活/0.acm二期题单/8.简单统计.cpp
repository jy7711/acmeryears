#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int t, l, r;
	cin >> t;
	for (int i = 0 ; i < t ; i++ ) {
		cin >> l >> r;
		int num = 0;
		for (int j = l; j < r+1 ; j++) {
			for (int n = j ; n > 0 ; n /= 10) {
				int x = n%10;
				if (x == 2) num++; 
			}
		}  
		cout << num << endl;
	}
	return 0;
}
