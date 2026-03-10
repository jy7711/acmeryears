#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
void ac()
{
    ll n,f,a,b; 
    cin >> n >> f >> a >> b;
    vector<ll> m(n);
    for (int i = 0; i < n; i++) cin >> m[i];
    ll ans = 0;
    
    ans += min(b,(m[0])*a);
    if (ans >= f) {
        cout << "NO\n"; 
        return;
    }

    for (int i = 1; i < n; i++) {
        ans += min(b,(m[i]-m[i-1])*a);
        if (ans >= f) {
            cout << "NO\n"; 
            return;
        }
    }
    cout << "YES\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int t; cin >> t; 
    while (t--) ac();

    return 0;
}