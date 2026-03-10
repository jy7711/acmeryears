#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string a, b; cin >> a >> b;
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;
    
    int j = 0; string ans = "";

    for (int i = a.size()-1; i >= 0; i--) {
        int x = a[i] - '0';
        int y = b[i] - '0';
        x += j;
        if (x+y >= 10) j = 1, ans += char((x+y-10)+'0');
        else j = 0, ans += char((x+y)+'0');
    }
    if (j) ans += '1';// 易错点：进位的判断
    reverse(ans.begin(),ans.end());
    bool gg = 0;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] != '0') gg = 1;
        if (gg) cout << ans[i];
    }
    if (!gg) cout << 0; //0 0 的情况
    return 0; 
}