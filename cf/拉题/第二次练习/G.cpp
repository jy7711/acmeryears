#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
void ac()
{
    int a, b, c, d; 
    cin >> a >> b >> c >> d;

    if (a == b && b == c && c == d) cout << "YES\n";
    else cout << "NO\n";

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