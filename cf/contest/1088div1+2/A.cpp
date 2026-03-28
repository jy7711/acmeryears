#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (n < 3) {
        for (int i = 0; i < n; i++) cout << n << ' ';
    }
    else {
        for (int i = 0; i < n; i++) cout << "2 ";
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