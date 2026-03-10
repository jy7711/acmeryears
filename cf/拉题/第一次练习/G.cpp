#include<bits/stdc++.h>
#define int long long
using namespace std;
int quick(int a, int b) {
    int res = 1;
    while (b) {
        if (b&1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
void ac(){
	int n, x; cin >> n;
    int ans = 0, cnt = 0;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        cin >> x;
        while (x%2 == 0) {
            x >>= 1;
            cnt++;
        }
        a.push_back(x);
        //cout << x << ' ';
    }
    //cout << '\n';
    sort(a.begin(),a.end());
    for (int i = 0; i < a.size()-1; i++) ans += a[i];
    //cout << ans << ' ' << cnt << ' ';
    ans += a[a.size()-1]*quick(2, cnt);
    cout << ans << '\n';
    return;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t; cin >> t;
    while (t--) ac();
	return 0;
} 