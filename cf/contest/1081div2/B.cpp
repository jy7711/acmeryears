#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    string s; cin >> s;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') a.push_back(i+1);
        else b.push_back(i+1);
    }
    if (a.size() == 0) {
        cout << "0\n";
        return;
    }
    if (a.size() & 1 && b.size()%2 == 0) {
        cout << "-1\n";
        return;
    }
    else if (a.size() & 1 && b.size() & 1) {
        cout << b.size() << '\n';
        for (int x : b) cout << x << ' ';
        cout << '\n';
    }
    else {
        cout << a.size() << '\n';
        for (int x : a) cout << x << ' ';
        cout << '\n';
    }
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