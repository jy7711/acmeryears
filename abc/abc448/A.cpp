#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        if (x > a[i]) x = a[i], cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}