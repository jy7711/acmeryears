#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
void ac()
{
    int n; cin >> n;
    string s, ss; cin >> s >> ss;
    int a1 = 0, a0 = 0, cnt = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] != ss[i]) {
            cnt++;
            if (s[i] > ss[i]) a1++;
            else a0++;
        }
    }

    cout << cnt - min(a1,a0) << '\n';

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