#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n, h, l; cin >> n >> h >> l;
    vector<int> a(n);
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= max(l,h)) c2++;
        if (a[i] <= min(l,h)) c1++;
    }
    cout << min(c2/2,c1) << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1; 
    cin >> t;
    while (t--) ac();
    return 0;
}