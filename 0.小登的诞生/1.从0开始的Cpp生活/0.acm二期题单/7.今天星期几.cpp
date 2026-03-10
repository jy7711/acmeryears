#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char a[10] = {0};
	int n = 0; int num = 0;
	
    const char a1[10] = "Monday",a2[10] = "Tuesday",a3[10] = "Wednesday",a4[10] = "Thursday",
	a5[10] = "Friday", a6[10] = "Saturday", a7[10] = "Sunday";
	
	cin >> a;
	for (int i = 0 ; i < strlen(a) ; i ++) {
		
	if (a[i] == a1[i] && a[i+1] == a1[i+1]) {
	cout << 1; break;
    }
    else if (a[i] == a2[i] && a[i+1] == a2[i+1]) {
	cout << 2; break;
    }
    else if (a[i] == a3[i] && a[i+1] == a3[i+1]) {
	cout << 3; break;
    }
	else if (a[i] == a4[i] && a[i+1] == a4[i+1]) {
	cout << 4; break;
    }
	else if (a[i] == a5[i] && a[i+1] == a5[i+1]) {
	cout << 5; break;
    }
	else if (a[i] == a6[i] && a[i+1] == a6[i+1]) {
	cout << 6; break;
    }
	else if (a[i] == a7[i] && a[i+1] == a7[i+1]) {
	cout << 7; break;
    }
}
	return 0;
}
