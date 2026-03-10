#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int n;
	for (int i = 0; i < t ; i++) {
		int x1,x2,x3,y1,y2,y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int dx = abs(x2 - x1);
		int dy = abs(y2 - y1); 
		if (x1 == x2 || y1 == y2) {
		    if (x1 == x2 && x3 == x2 && y3 > min(y1,y2) && y3 < max(y1,y2)) n = dy + 2;
            else if (y1 == y2 && y3 == y2 && x3 > min(x1,x2) && x3 < max(x1,x2)) n = dx + 2;
            else n = dx + dy;
		}
		else n = dx + dy;
		cout << n << endl;
	}
	return 0;
}
