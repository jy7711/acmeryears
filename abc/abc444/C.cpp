#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    ll sum = 0;
    vector<ll> a(n), ans;  
    map<int,int> mp, mpp;
    for (int i = 0; i < n; i++) cin >> a[i], sum += a[i], mp[a[i]]++;
    sort(a.begin(), a.end(), greater<>());
    // for (int i = 0; i < n; i++) cout << a[i] << ' ';
    // cout << '\n';
    for (int i = (n+1)/2; i <= n; i++) {
        if (sum%i != 0) continue;
        mpp = mp;
        //for (auto[x,y] : mpp) cout << x << ' ' << y << '\n';
        map<int,int> cnt;
        bool gg = 1; ll av = sum/i;
        //cout  << av << '\n';
        for (int j = 0; j < n; j++) {
            //cout << i << ' ' << j << '\n';
            if (a[j] > av) {gg = 0; break; } 
            if (cnt[a[j]] > 0) {cnt[a[j]]--; continue;}
            else if (a[j] == av) continue;
            else {
                //cout << a[j] << " mp: " << mp[av-a[j]] << '\n';
                if (mpp[av-a[j]] > 0) mpp[av-a[j]]--, cnt[av-a[j]]++;
                else {gg = 0; break;}
            }
            
        }
        if (gg) ans.push_back(av);
        //cout << '\n';
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
    return 0;
}