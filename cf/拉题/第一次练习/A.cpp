#include <bits/stdc++.h>
using namespace std;
#define int long long 
int n,m,r,c; 
char x;
void ac()
{
    cin >> n >> m >> r >> c;
    int h = 0, sum = 0; bool gg = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> x;
            if (x == 'B') {
                sum ++;
                if (i == r || j == c) h++;
                if (i == r && j == c) gg = 1;
            }
        }
    }
    if (gg) {cout << "0\n"; return;}
    if (sum) {
        if (h) cout << "1\n";
        else cout << "2\n";
    }
    else cout << "-1\n";
    return ;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ac();
    }
    return 0;
}