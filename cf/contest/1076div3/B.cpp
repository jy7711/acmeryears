#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<int> a(n), b(n+1,0);
    for (int i = 0; i < n; i++) cin >> a[i], b[a[i]] = i;
    for (int i = 0; i < n; i++) {
        if (a[i] != n-i) {
            reverse(a.begin()+i,a.begin()+b[n-i]+1);
            break;
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
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