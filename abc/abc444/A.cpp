#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    string s; cin >> s;
    set<char> a;
    for (int i = 0; i < s.size(); i++) a.insert(s[i]);
    if (a.size() == 1) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}