#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac() 
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int mx = -1, mi = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > mx) mx = a[i], mi = i;
    }
    swap(a[0],a[mi]);
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