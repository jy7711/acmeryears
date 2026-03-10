#include <bits/stdc++.h>
using namespace std;
int t, n;
string s, ss;
vector<int> ans;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> t;
    while (t--) {
        ans.clear();
        cin >> n >> s; 
        for (int i = 0; i < n; i++) 
            if (s[i] == '1') ans.push_back(i+1);
        cout << ans.size() << '\n';
        for (int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}