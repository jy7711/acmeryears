#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,q;
    cin >> n >> q;
    vector<ll> a(n + 1,0);
    vector<ll> sum(n + 1, 0);
    for(int i = 1;i <= n;i++)
        cin >> a[i];
    for(int i = 1;i <= n;i++)
        sum[i] = sum[i - 1] + a[i];
    while(q--)
    {
        ll l , r;
        cin >> l >> r;
        cout << sum[r] - sum[l - 1] << endl;
    }
    return 0;
}