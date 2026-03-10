#include<bits/stdc++.h>
#define int long long
using namespace std;
void ac(){
	int n, k; cin >> n >> k;
    vector<int> a(n);
    map<int,int> mp; deque<int> ans;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
        if (mp[a[i]] == 1) ans.push_back(a[i]);
        if (ans.size() > k) mp[ans[0]] = 0, ans.pop_front();
    }
    cout << ans.size() << '\n';
    while (!ans.empty()) {
        cout << ans.back() << ' ';
        ans.pop_back();
    }
    cout << '\n';
    return;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	// int t; cin >> t;
    // while (t--) 
    ac();
	return 0;
} 