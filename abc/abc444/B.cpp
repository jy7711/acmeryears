#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n, k; cin >> n >> k;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        int sum = 0;
        for (int j = 0; j < s.size(); j++) sum += s[j] - '0';
        ans += sum == k;
    }
    cout << ans << '\n';
    return 0;
}