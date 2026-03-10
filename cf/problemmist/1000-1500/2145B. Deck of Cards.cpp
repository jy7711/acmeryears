#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<char> a(k); vector<char> b(n,'+');
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < k; i++) {
            cin >> a[i];
            if (a[i] == '0') cnt0++;
            else if (a[i] == '1') cnt1++;
            else cnt2++;
        }
        if (n == k) {
            for (int i = 0; i < n; i++) {b[i] = '-'; cout << b[i];}
        } 
        else {
            for (int i = cnt0; i < cnt0+cnt2; i++) b[i] = '?';
            for (int i = n-cnt1-1; i > n-cnt1-1-cnt2; i--) b[i] = '?';
            for (int i = 0; i < cnt0; i++) b[i] = '-';
            for (int i = n-cnt1; i < n; i++) b[i] = '-';

            for (int i = 0; i < n; i++) cout << b[i];
        }
        
        cout << '\n';
    }
    return 0;s
}