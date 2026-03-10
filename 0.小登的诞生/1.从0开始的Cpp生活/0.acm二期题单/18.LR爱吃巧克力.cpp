#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int t = 1;
	int cnt = 0;
	int a[n] = {0}; 
	for (int i = 0; i < n ; i++) {
		cin >> a[i];
		if (a[i] == 1) cnt++;
	}
	if (cnt == 0) cout << 0 << endl;
	else if (cnt == 1) cout << 1 << endl;
	else {
	    for (int i = 0; i < n ;i++) {
	    	for (int j = i ; j < n ; j++) {
	    		if (a[j] == a[i] && a[i] == 1 && i != j) {
	    			t *= (j-i);
	    			break;
	    		}
			}
		}
		cout << t << endl;
    }
	return 0;
}
