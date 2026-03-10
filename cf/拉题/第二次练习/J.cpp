#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
void ac()
{
    int n, m; cin >> n >> m;
    vector<int> a(n), b(35,0);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int j = 0; j < 30; j++) {
        for (int i = 0; i < n; i++) {
           b[j] += (a[i] >> j & 1);   
        }
    }

    ll ans = 0;
    for (int i = 0; i < 32; i++) {
        if (b[i] > n/2) ans += (1ll << i);
    }

    cout << ans << '\n';

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