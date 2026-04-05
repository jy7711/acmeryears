#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int a[7];
    ll sum = 0;
    for (int i = 0; i < 7; i++) cin >> a[i], sum += a[i];
    sort(a,a+7);
    cout << a[6]*2-sum << '\n';
    return;
}
int main() 
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}