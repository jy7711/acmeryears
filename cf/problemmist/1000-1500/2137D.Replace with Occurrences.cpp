#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> b(n+1);
        vector<int> mp(n+1);
        vector<int> a(n+1);
        map<int,int> mpp; ll sum = 0;
        int x = 1; 
        for (int i = 1; i <= n; i++) cin >> b[i];
        for (int i = 1; i <= n; i++) {
            mpp[b[i]]++;
            if (mpp[b[i]] == 1) sum += b[i];
            if (mpp[b[i]] == b[i]) mpp[b[i]] = 0;
            if (sum > n) break;
        }
        if (sum > n) {cout << -1 << '\n'; continue;}
        for (int i = 1; i <= n; i++) {
            mp[b[i]]++;
            if (mp[b[i]] == 1) { a[b[i]] = x; x++; }
            cout << a[b[i]] << ' '; 
            if (mp[b[i]] == b[i]) mp[b[i]] = 0;
        }
        cout << '\n';
    }
    return 0;
}