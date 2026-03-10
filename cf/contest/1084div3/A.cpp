#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<int> a(n);
    int mx = -1, cnt = 0;
    for (int i = 0; i < n; i++) { 
        cin >> a[i];
        if (a[i] > mx) mx = a[i], cnt = 1;
        else if (a[i] == mx) cnt++;
    }
    cout << cnt << '\n';
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