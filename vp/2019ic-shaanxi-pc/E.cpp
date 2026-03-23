#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, k; 
string s; 
bool check(int mid)
{
    int cnt = 0;
    for (int i = 1; i <= n; ) {
        if (s[i] == '1') i += mid, cnt++;
        else i++; 
    }
    return cnt <= k;
}
void ac()
{
    //这么简单的二分答案在想什么
    cin >> n >> k >> s;
    s = ' ' + s;
    int l = 1, r = n, ans = 0;
    while (l <= r) {
        int mid = l + (r-l)/2;
        if (check(mid)) r = mid-1, ans = mid;
        else l = mid+1;
    }
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}