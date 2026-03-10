#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll a, b, c, d; cin >> a >> b >> c >> d;
    if (max(a,b) > min(a,b)*2+2 || max(d-b,c-a) > min(d-b,c-a)*2+2) cout << "NO\n";
    else cout << "YES\n";
    return; 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}