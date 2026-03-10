#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[1007], b[1007];
void qsort(int l, int r) {
    int i = l, j = r;
    int mid = l + (r-l)/2;
    while (i <= j) {
        int x = a[mid];
        while (a[i] < x) i++;
        while (a[j] > x) j--;
        if (i <= j) {
            swap(a[i],a[j]);
            i++, j--;
        }
    }
    if (i < r) qsort(i, r);
    if (l < j) qsort(l, j);
    return;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    qsort(1,n);
    for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    return 0;
}