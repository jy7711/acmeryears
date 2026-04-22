#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    string s; cin >> s;
    vector<int> an;
    int j = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i-1]) {
            an.push_back(i-j), j = i;
        } 
    }
    an.push_back(s.size()-j);
    cout << (an.size() > 3 ? "NO\n" : "YES\n");
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}