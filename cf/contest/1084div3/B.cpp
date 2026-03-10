#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    bool gg = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i-1]) gg = 1;
    }
    if (gg) cout << "1\n";
    else cout << n << '\n';
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