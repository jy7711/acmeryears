#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t; cin >> t;
    while (t--) {
        int aa, bb; cin >> aa >> bb;
        ll sum = 0;
        vector<int> a(aa), b(bb);
        for (int i = 0; i < aa; i++) {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 0; i < bb; i++) cin >> b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for (int i = 0; i < b.size(); i++) {
            if (a.size() >= b[i]) {
                sum -= a[a.size()-b[i]];
                a.erase(a.end()-b[i],a.end());
            }
            else break;
        }
        cout << sum << '\n';
        // for (auto &ele : a) cout << ele << ' ';
        // cout << '\n';
        // for (auto &ele : b) cout << ele << ' ';cout << '\n';
    }
    return 0;
}