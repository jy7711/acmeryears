#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    string s; cin >> s;
    stack<char> sk;
    for (int i = 0; i < n; i++) {
        if (sk.empty()) sk.push(s[i]);
        else {
            if (sk.top() == s[i]) sk.pop();
            else sk.push(s[i]);
        }
    }
    if (sk.empty()) cout << "YES\n";
    else cout << "NO\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}