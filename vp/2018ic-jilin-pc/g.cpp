#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void f(){
    //石头 剪刀 布
    ll n, a1, a2, a3, b1, b2, b3;
    cin >> n >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    ll c1 = a1, c2 = a2, c3 = a3, d1 = b1, d2 = b2, d3 = b3;
    ll x, y, z, cnt1, cnt2;
    x = min(a1, b2), y = min(a2, b3), z = min(a3, b1);
    cnt1 = x+y+z; 
    a1 -=  x, b2 -= x, a2 -= y, b3 -= y, a3 -= z, b1 -= z;
    x = min(a1, b1), y = min(a2, b2), z = min(a3, b3);
    a1 -= x, a2 -= y, a3 -= z;
    cnt2 = a1+a2+a3;
    cout << cnt1 - cnt2 << ' ';

    a1 = c1, a2 = c2, a3 = c3, b1 = d1, b2 = d2, b3 = d3;
    x = min(b1, a2), y = min(b2, a3), z = min(b3, a1);
    cnt1 = x+y+z;
    a1 -= z, b3 -= z; a2 -= x; b1 -= x; b2 -= y; a3 -= y;
    x = min(a1, b1), y = min(a2, b2), z = min(a3, b3);
    a1 -= x, a2 -= y, a3 -= z; 
    cnt2 = a1+a2+a3;
    cout << cnt2-cnt1 << '\n';

}
int main(){
    int t;cin>>t;while(t--)
    f();
}