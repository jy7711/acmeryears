#include <iostream>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;

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


int main() {
    // 测试 k=0 的情况
    cout << "C(5, 0) = " << C(5, 0) << endl;      // 1
    cout << "C(0, 0) = " << C(0, 0) << endl;      // 1
    cout << "C(10, 0) = " << C(10, 0) << endl;    // 1
    
    // 测试 k=n 的情况（利用对称性）
    cout << "C(5, 5) = " << C(5, 5) << endl;      // 1
    cout << "C(10, 10) = " << C(10, 10) << endl;  // 1
    
    // 测试其他值
    cout << "C(5, 2) = " << C(5, 2) << endl;      // 10
    cout << "C(10, 3) = " << C(10, 3) << endl;    // 120
    
    return 0;
}