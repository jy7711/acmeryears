#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    int x = n/2, y = n/2+1;
    for (int i = 0; i < n; i++) {
        if (i & 1) cout << x-- << ' ';
        else cout << y++ << ' ';
    }
    cout << '\n';
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