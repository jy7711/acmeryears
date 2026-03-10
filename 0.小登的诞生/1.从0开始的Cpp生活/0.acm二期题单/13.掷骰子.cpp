#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y;
	if (x > y) z = x;
	else z = y;
	if (z == 1) cout << "1/1";
	return 0;
}
