#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    string s; cin >> s;
    for (int i = 0; i < (n-2)/2; i++) {
        if (s[i] == ')') {
            cout << n-2 << '\n';
            return;
        }
    }
    cout << "-1\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}