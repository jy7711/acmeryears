#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll a; cin >> a;
        bitset<32> bt(a);
        string s, s1; 
        vector<int> b;
        int cnt = 0;
        for (int i = 31; i >= 0; i--) {
             if (bt[i] == 1) {
                b.push_back(i);
                cnt++;
             }
        }
        if (cnt%2 == 0 && cnt != 0) {
            sort(b.begin(),b.end());
            for (int i = b[0]; i <= b[b.size()-1]; i++) s += (char)(bt[i]);
            s1 = s;
            reverse(s1.begin(),s1.end());
            if (s == s1) cout << "YES\n";
            else cout << "NO\n";
        }
        else if (cnt == 0) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}