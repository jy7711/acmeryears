// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0),cout.tie(0);
//     int t; cin >> t;
//     while (t--) {
//         int n; cin >> n;
//         int a1 = 0, a2 = 0, ans = 0, ca = 0, cb = 0;
//         vector<int> a(n+1,0), b(n+1,0);
//         for (int i = 1; i <= n; i++) cin >> a[i], ca += a[i];
//         for (int i = 1; i <= n; i++) cin >> b[i], cb += b[i];
//         for (int i = 1; i <= n; i++) {
//             if (i & 1) {
//                 if (a[i] != b[i]) a1 = i;
//             }
//             else {
//                 if (a[i] != b[i]) a2 = i;
//             }
//         }
//         ca %= 2; cb %= 2;
//         if (ca == cb) {
//             cout << "Tie\n";
//         }
//         else {
//             if (ca > cb) {
//                 if (a1 >= a2) cout << "Ajisai\n";
//                 else cout << "Mai\n";
//             }
//             else {
//                 if (a2 >= a1) cout << "Mai\n";
//                 else cout << "Ajisai\n";
//             }
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define int long long
void ac()
{
    int n, c; cin >> n;
    bool gg = 0;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    c = 0;
    for (int i = n-1; i >= 0; i--) {
        if (a[i] & 1) c^= 1;
        if (b[i] & 1) c^= 1;
    }
    if (!c) {cout << "Tie\n"; return;}
    gg = 1;
    for (int i = n-1; i >= 0; i--) {
        if ((a[i] & 1) != (b[i] & 1)) {
            if (i&1) cout << "Mai\n";
            else cout << "Ajisai\n";
            return;
        }
    }
    return;
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