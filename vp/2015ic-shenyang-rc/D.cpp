#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b) {return b ? gcd(b,a%b) : a;}
ll cnt;
void ac()
{
    //大致题意：给定一个1-n的范围， 给出两个数a,b
    //可以任意对已经给出的数选2进行加减生成新数
    //谁先无法生成判负， 输出赢家

    //思路：找a,b最大公约数，用n除得出一共有多少个
    //-2不影响结果
    ll n, a, b; cin >> n >> a >> b;
    cout << "Case #" << ++cnt << ": ";
    cout << (((n/gcd(a,b)) & 1) ? "Yuwgna\n" : "Iaka\n");
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t; 
    while (t--) ac();
    return 0;
}