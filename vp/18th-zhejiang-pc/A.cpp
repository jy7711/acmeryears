#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    vector<ll> a(5), b(5);
    ll s1 = 0, s2 = 0;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        s1 += a[i];
    } 
    for (int i = 0; i < 5; i++) {
        cin >> b[i];
        s2 += b[i];
    }
    if (s1 > s2) {
        cout << "Blue\n";
    }
    else cout << "Red\n";
    return 0;
}