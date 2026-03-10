#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n, s, x; cin >> n >> s >> x;
    int sum = 0, c;
    for (int i = 0; i < n; i++) cin >> c, sum += c;
    if (sum > s) cout << "NO\n";
    else {
        if ((sum-s+x)%x == 0) cout << "YES\n";
        else cout << "NO\n"; 
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}