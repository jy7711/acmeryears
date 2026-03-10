#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 998244353;
void ac()
{
    int n; cin >> n;
    if (n == 2 || n == 3) cout << n << '\n';
    else if (n > 3 && n%2 == 0) cout << "0\n";
    else cout << "1\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; cin >> t;
    while (t--) {
        ac();
    }   
    return 0;
}
