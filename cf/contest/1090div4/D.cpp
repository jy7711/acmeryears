#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//埃式筛
const ll N = 2e5;
bool ip[N+7];//判断素数
vector<ll> pa; //打素数表
void prime()
{
    memset(ip,1,sizeof ip);//初始全赋为素数
    ip[1] = 0;
    for (ll i = 2; i*i <= N; i++) {
        if (ip[i]) {//如果是素数
            for (ll j = i*i; j <= N; j+=i) ip[j] = 0;//则它的倍数都不是
        }
    }
    for (ll i = 2; i <= N; i++) {
        if (ip[i]) pa.push_back(i);//打表
    }
    return;
}

void ac()
{
    int n; cin >> n;
    for (ll i = 0; i < n; i++) {
        cout << pa[i]*pa[i+1] << ' ';
    }
    cout << '\n';
    return;
}
int main() 
{
    ios::sync_with_stdio(false), cin.tie(0);
    prime();
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}