#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char a[30] = {0};
	cin >> a;
	int cnt1 = 0, cnt2 = 0;
	char an[30] = {0};
	while (cin >> an) {
	    if (strcmp(a,an) == 0) cnt2++;
	    else cnt1++;
	}
	cout << cnt1 << endl << cnt2 << endl;
	return 0;
}
