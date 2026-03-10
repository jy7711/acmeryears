#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t = 2*n;
    int a[t] = {0};
    for (int i = 0; i < t ; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < t ; i++) {
        if (a[i] == a[0]) {
            cout << i+1;
            break;
        }
    }
    return 0;
}
