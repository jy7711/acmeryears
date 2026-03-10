#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll N=998244353;

ll quick(ll a,ll b)  // 快速幂函数
{
    ll res=1; a %= N;
    while(b)
    {
        if (b&1) res = res*a%N;
        a = a*a%N;
        b >>= 1;
    }
    return res;
}

int main()
{
    ll n;
    cin>>n;
    cout<<quick(2,n-1);  // 输出 2^(n-1) mod N
}