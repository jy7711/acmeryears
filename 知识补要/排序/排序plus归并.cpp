#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1007], b[1007];
void hebin(int l,int mid, int r) {
    int p = l, q = mid+1;
    for (int i = l; i <= r; i++) {
        if (a[p] < a[q] || (q > r && p <= mid)) b[i] = a[p++]; 
        else b[i] = a[q++];
    }
    for (int i = l ; i <= r; i++) a[i] = b[i];
    return;
}
void msort(int l, int r) {
    if (l == r) return;
    int mid = l + (r-l)/2;
    msort(l,mid);
    msort(mid+1,r);
    hebin(l,mid,r);
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    msort(1,n);
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    return 0;
}