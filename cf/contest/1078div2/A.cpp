#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n, w; cin >> n >> w;
    cout << n - n/w << '\n';
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