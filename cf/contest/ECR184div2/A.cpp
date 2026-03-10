#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    //赛时0题狠狠战败
    //这个思路存在瑕疵和问题，所以不但改的吃力而且容易错，最后也没a
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    // int t; cin >> t;
    // while (t--) {
    //     int n,a; cin >> n >> a;
    //     vector<int> b(n);
    //     for (int i = 0; i < n; i++) cin >> b[i];
    //     sort(b.begin(),b.end());
    //     if (n == 1) {cout << b[0] << '\n'; continue;}
    //     int i = 0;
    //     for (i = 0; i < n; i++) {
    //         if (b[i] >= a) break;
    //     }
    //     if (i >= (n+1)/2-1) cout << a-1 << '\n';
    //     else cout << a+1 << '\n';
    // }
    //下面的应该就是较优的思路了
    int t; cin >> t;
    while (t--) {
        int n, a; cin >> n >> a;
        int cnt1 = 0, cnt2 = 0;
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] > a) cnt2++;
            else if (b[i] < a) cnt1++;
        }
        if (cnt2 > cnt1) cout << a+1 << '\n';
        else cout << a-1 << '\n';
    } 
    return 0;
}