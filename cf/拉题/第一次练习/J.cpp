#include<bits/stdc++.h>
#define int long long
using namespace std;
void ac(){
	int n; cin >> n;
    vector<int> a(n);
    map<int,int> mp, mpp;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        mp[a[i]]++; mpp[a[i]]++;
        if (mp[a[i]] == 2) {
            if (a[i-1] != a[i]) {
                cout << "YES\n"; return;
            }
            else mp[a[i]] = 1;
        }
        if (mpp[a[i]] >= 3) {
            cout << "YES\n"; return;
        } 
    }
    cout << "NO\n";
    return;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t; cin >> t;
    while (t--) 
    ac();
	return 0;
} 