#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    if (n & 1) {
        cout << n-1 << ' ';
        for (int i = 2; i < n-2; i += 2) cout << i+1 << ' ' << i << ' ';
        cout << n << ' ' << 1;
    }
    else{   
        cout << n << ' ';
        for(int i = 2; i < n-1; i += 2) cout << i+1 << ' ' << i << ' ';
        cout << 1;
    }
    cout << '\n';
    return;
}

signed main()
{
    ios::sync_with_stdio(false);
    int t = 1; cin >> t;
    while(t--) ac();
    return 0;
}