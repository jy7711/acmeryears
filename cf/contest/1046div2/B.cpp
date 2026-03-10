#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n, k; cin >> n >> k;
    string s; cin >> s; 
    s = ' ' + s + ' ';
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i] == '1') sum++; 
        else sum = 0;
        if (sum >= k) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    int l = 1, r = n;
    for (int i = 1; i <= n; i++) {
        if (s[i] == '0') cout << r-- << ' ';
        else cout << l++ << ' ';
    }
    cout << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}