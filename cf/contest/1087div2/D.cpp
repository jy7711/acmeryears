#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    string ans;
    ll ccc, sum = 0;
    vector<pair<int,char>> a;
    for (int i = 0; i < 3; i++) {
        cin >> ccc; sum += ccc;
        if (i == 0) a.push_back({ccc,'R'});
        else if (i == 1) a.push_back({ccc,'G'});
        else if (i == 2) a.push_back({ccc,'B'});
    }
    //sort(a.begin(),a.end(),greater<>());
    char la = 'A', laa = 'A', laaa = 'A';
    //cout << la << ' ' << laa << ' ' << laaa << '\n';
    bool gg = 1;
    while (sum && gg) {
        gg = 0;
        sort(a.begin(),a.end(),greater<>());
        for (int i = 0; i < 2; i++) {
            if (a[i].first == 0) continue;
            if (la == a[i].second || laaa == a[i].second) continue;
            a[i].first--, sum--; gg = 1; 
            laaa = laa; laa = la; la = a[i].second;
            ans += a[i].second;
        }
        //cout << ans << ' ' << la << laa << laaa << '\n';
    }
    cout << ans << '\n';
    // for (int i = 0; i < 3; i++) cout << a[i].first << a[i].second << ' ';
    // cout << '\n';
    return; 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}