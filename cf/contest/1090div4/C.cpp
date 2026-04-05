#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    ll c1 = 0, c2 = n*3;
    for (int i = 0; i < n*3; i++) {
        if (i%3 == 0) cout << ++c1 << ' ';
        else if (i%3 == 1) cout << c2-1 << ' ';
        else if (i%3 == 2) cout << c2 << ' ', c2 -= 2;
    }
    cout << '\n';
    return;
}
int main() 
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}