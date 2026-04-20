#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5e5 + 7;
int n, a[N];
int find(int x) 
{
    return x == a[x] ? x : a[x] = find(a[x]);
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        int x = find(i); //找爹
        if (x == i) continue;
        a[i] = x;
    }
    
    for (int i = 1; i <= n; i++) {
        cout << a[i] << ' ';
    }
    return 0;
}