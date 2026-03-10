#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+7;
bool ip[N];
int pa[N];
int cnt = 0;
void prime()
{   //其实还好，只是一开始用分解质因数板超时了，改用了埃式筛就a了
    //1400 tag: 贪心 模拟 数论 数学
    //题目链接:https://codeforces.com/contest/2154/problem/C1
    memset(ip,1,sizeof ip);
    ip[1] = 0;
    for (int i = 2; i*i <= N; i++) {
        if (ip[i]) {
            for (int j = i*i; j <= N; j+=i) ip[j] = 0;
        }
    }
    for (int i = 2; i <= N; i++) 
        if (ip[i]) pa[cnt++] = i;
}
int pp[N];
void ac()
{
    memset(pp,0,sizeof pp);
    int n; cin >> n;
    vector<int> a(n),b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        ll x = a[i];
        for (int j = 0; pa[j]*pa[j] <= a[i]; j++) {
            if (x%pa[j] == 0) pp[pa[j]]++;
            while (x%pa[j] == 0) x/=pa[j];
            if (pp[pa[j]] > 1) {cout << 0 << '\n'; return;}
        }
        if (x > 1) pp[x]++;
        if (pp[x] > 1 && x >= 2) {cout << 0 << '\n'; return;}
    }
    for (int i = 0; i < n; i++) {
        ll x = a[i]+1;
        for (int j = 0; pa[j]*pa[j] <= a[i]+1; j++) {
            if (x%pa[j] == 0) {
                if (pp[pa[j]]+1 > 1) {
                    cout << 1 << '\n'; 
                    return;
                }
            }
            while (x%pa[j] == 0) x/=pa[j];
        }
        if (x > 1) pp[x]++;
        if (pp[x] > 1 && x >= 2) {cout << 1 << '\n'; return;}
        pp[x]--;
    }
    cout << 2 << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    prime();
    int t; cin >> t;
    while(t--) ac();
    return 0;
}