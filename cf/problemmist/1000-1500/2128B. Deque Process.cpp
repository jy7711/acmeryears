#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, cnta = 1, cntb = 1, maxa = 0, maxb = 0, cnt = 0;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int i = 0, j = n-1; bool g = 1;
        while (cnt < n) {
            if (g) {
                if (a[i] > a[j]) {cout << 'L'; i++; cnt++;}
                else {cout << 'R'; j--; cnt++;}
                g = 0;
            }
            else {
                if (a[i] < a[j]) {cout << 'L'; i++; cnt++;}
                else {cout << 'R'; j--; cnt++;}
                g = 1;
            }
        }
        cout << '\n';
    }
    return 0;
}