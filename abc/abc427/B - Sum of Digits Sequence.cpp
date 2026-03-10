#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(ll a)
{
    string s = to_string(a);
    ll sum = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i] - '0';
    }
    return sum;
} 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n; cin >> n;
    vector<ll> a(n+1,0);
    a[0] = 1; a[1] = 1;
    for (int i = 2; i <= n; i++) {
        a[i] = a[i-1] + f(a[i-1]);
    }
    cout << a[n];
    return 0;
}