#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
    ll t = b;
    while (b) {
        b = a%b;
        a = t;
        t = b;
    }
    return a;
}

ll x, y;//, a, b;
ll exgcd(ll a, ll b)
{
    if (!b) {
        x = 1;
        y = 0;
        return a;
    }
    ll g = exgcd(b, a%b);
    ll t = x;
    x = y;
    y = t - a/b*y;
    return g;
}
//拓展欧几里得，输入a, b
// 得到满足 ax + by = gcd(a,b)的一组解 

int main()
{
    int a = 12, b = 6;
    //cout << __gcd(4 , 5);
    cout << gcd(a,b);
}

//裴蜀定理（贝祖定理）
//对于一个二元一次方程ax+by=c，
//如果 c是gcd(a,b)的倍数，那么这个方程一定有整数解

//比gcd还快
int stein_gcd(int a,int b)
{
    int az = __builtin_ctz(a),bz = __builtin_ctz(b);
    int z = min(az,bz);
    b >>= bz;
    while(a)
    {
        a >>= az;
        int dif = b - a;
        az = __builtin_ctz(dif);
        if(a<b) b = a;
        if(dif<0) a=-dif;
        else a = dif;
    }
    return b<<z;
}