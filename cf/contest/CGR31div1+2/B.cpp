#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<string> a(n);
    string ans;
    for (int i = 0; i < n; i++) cin >> a[i];
    
    //for (int i = 0; i < n; i++) cout << a[i] << '\n';
    for (int i = 0; i < n; i++) {
        if (i == 0) {ans += a[i]; continue;}
        string s1 = ans + a[i], s2 = a[i] + ans;
        if (s1 > s2) ans = s2;
        else ans = s1;
    }
    cout << ans << '\n';
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
}