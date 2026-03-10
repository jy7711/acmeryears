#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac() 
{
    ll nn; cin >> nn;
    ll n = nn;
    map<int ,int> mp;
    for(int i = 2;i * i <= n;i++) {
        while(n % i == 0) {
            mp[i]++;
            n/=i;
        }
    }
    if(n > 1) mp[n]++;
    ll ans = 1;
    for (auto &ele : mp) ans *= ele.first;
    cout << ans << '\n';
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