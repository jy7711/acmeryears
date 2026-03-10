#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t; cin >> t;
    while (t--) {
        ll n, rk, ck, rd, cd;
        cin >> n >> rk >> ck >> rd >> cd;
        ll ans = 0;
        if (rk == rd || ck == cd) {
            if (rk == rd) ans = (ck > cd ? n-cd : cd);
            else ans = (rk > rd ? n-rd : rd);
        } 
        else {
            if (rk < rd && ck < cd) ans = max(rd,cd);
            else if (rk < rd && ck > cd) ans = max(rd,n-cd);
            else if (rk > rd && ck < cd) ans = max(n-rd,cd);
            else ans = max(n-rd,n-cd); 
        }
        cout << ans << '\n';
    }
    return 0;
}