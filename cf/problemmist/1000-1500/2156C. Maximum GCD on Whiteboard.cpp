#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k; 
const int N = 2e5+7;
int a[N], b[N], c[N];
void ac()
{
    cin >> n >> k;
    for (int i = 0; i < N; i++) a[i] = 0, b[i] = 0, c[i] = 0;
    for (int i = 0; i < n; i++) cin >> a[i], b[a[i]]++;
    // b[i] : 充当一个map的作用
    // c[i] : 记录 <= i 的个数
    for (int i = 1; i <= n; i++) c[i] = c[i-1] + b[i];
    sort(a,a+n);
    for (int i = a[n-1]; i >= 1; i--) {
        int x = 4*i; x = min(x,n);
        int cnt = n-c[x];
        if (i <= n) cnt += b[i];
        if (i*2 <= n) cnt += b[2*i];
        if (i*3 <= n) cnt += b[3*i];
        if (i*4 <= n) cnt += b[4*i];
        if (cnt >= n-k) {
            cout << i << '\n';
            return;
        }
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}