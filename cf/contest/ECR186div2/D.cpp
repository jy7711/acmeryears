#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 998244353;

// 快速幂求逆元
ll modPow(ll a, ll b) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

// 计算逆元
ll inv(ll x) {
    return modPow(x, mod - 2);
}

// 组合数函数
ll C(ll n, ll k) {
    if (k < 0 || k > n) return 0;
    if (k > n - k) k = n - k;
    
    ll numerator = 1;
    ll denominator = 1;
    
    for (int i = 1; i <= k; i++) {
        numerator = numerator * (n - k + i) % mod;
        denominator = denominator * i % mod;
    }
    
    return numerator * inv(denominator) % mod;
}

void ac()
{
    ll n, sum, mx = -1; cin >> n >> sum;

    vector<ll> a(n);
    
    for (int i = 0; i < n; i++) cin >> a[i], mx = max(a[i],mx);
    
    bool gg = 1;
    //c1活结c2死结
    ll c1 = 0, c2 = 0, c11, c22;
    
    for (int i = 0; i < n; i++) {
        if (a[i] < mx) sum -= mx-1-a[i], c1++;
        else if (a[i] == mx) c2++;
        if (sum < 0) {gg = 0; break;}
    }
    //cout << c1 << ' ' << c2 << ' ' << '\n';
    //把所有小于活结的垫成活结
    if (!gg) {cout << "0\n"; return;}
    ll ans = 1;
    if (sum > c1) {
        //如果能垫完all --> 把所有活结垫成死结，重新计数，所有都是活结 C活结 sum
        sum -= c1, sum %= n;
        c11 = n; c22 = sum;
        c2 = n-sum, c1 = sum;
    }
    else {
        //c11是分母， c22是分子
        c11 = c1; c22 = sum;
        c1 = c1-sum; c2 = n-c1;
    }
    //else
    //垫不完 --> 全垫活结， 那就是C活结 sum
    //cout << c1 << ' ' << c2 << ' ' << c11 << ' ' << c22 << ' ' << '\n';
    //死结排序*活结排序*C活结选择
    for (int i = 1; i <= c1; i++) (ans *= i) %= mod;
    for (int i = 1; i <= c2; i++) (ans *= i) %= mod;
    //nnnd要用逆元，忘了这茬了
    ll num = C(c11,c22);
    (ans *= num) %= mod; 
    cout << ans << '\n';
    //cout << c1 << ' ' << c2 << ' ' << cu << ' ' << "\n\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ac();
    }   
    return 0;
}
