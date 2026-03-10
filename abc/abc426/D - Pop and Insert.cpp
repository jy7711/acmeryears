#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        ll cnt0 = 0, cnt1 = 0, max0 = 0, max1 = 0, sum0 = 0, sum1 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                sum0++;
                cnt0++;
                max1 = max(max1,cnt1);
                cnt1 = 0;
            }
            else {
                sum1++;
                cnt1++;
                max0 = max(max0,cnt0);
                cnt0 = 0;
            }
        }
        max1 = max(max1,cnt1); max0 = max(max0,cnt0);
        //if (sum0 == 0 || sum1 == 0) {cout << 0 << '\n'; continue;}
        ll ans0 = (sum0-max0)*2 + sum1;
        ll ans1 = (sum1-max1)*2 + sum0;
        cout << min(ans0,ans1) << '\n';
    } 
    return 0;
}