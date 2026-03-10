#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0, ans1 = 0, ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1') cnt++;
    }
    ans1 = cnt, ans2 = cnt;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == '0' && s[i - 1] == '1' && s[i + 1] == '1')
            s[i] = '1', cnt++;
    }
    ans2 = max(cnt, ans2);
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i - 1] == '1' && s[i + 1] == '1')
            s[i] = '0', cnt--;
    }
    ans1 = min(ans1, cnt);
    cout << ans1 << ' ' << ans2 << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        ac();
    return 0;
}