#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n , q;
    cin >> n >> q;
    vector<ll> a(n + 1 , 0);
    vector<ll> b(n + 1,  0);
    for(int i = 1;i <= n;i++)
        cin >> a[i];
    for(int i = 1;i <= n;i++)
        b[i] = a[i] - a[i - 1];
    while(q--)
    {
        ll l , r ,k;
        cin >> l >> r >> k;
        b[l] += k;
        b[r + 1] -= k;
    }
    for(int i = 1;i <= n;i++)
    {
        a[i] = a[i - 1] + b[i];
    }
    for(int i = 1;i <= n;i++)
    cout << a[i] << " ";
    return 0;
}