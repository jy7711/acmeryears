#include <bits/stdc++.h>
using namespace std;
void ac()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') cnt++;
    }
    if (cnt <= k) cout << "Alice\n";
    else if (n >= k*2) cout << "Bob\n";
    else cout << "Alice\n"; 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ac();
    }
    return 0;
}