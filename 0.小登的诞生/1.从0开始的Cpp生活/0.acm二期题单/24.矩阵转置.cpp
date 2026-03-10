#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            swap(a[i][j],a[j][i]);
        }
    }
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << a[i][j];
			if (j < 2) cout << " "; 
		}
		if (i < 2) cout << "\n";
	}
	return 0;
}
