#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n, s, cnt = 0;
        cin >> n >> s;
        while (n--) {
            ll dx,dy,x,y; 
            cin >> dx >> dy >> x >> y;
            if (x==y && abs(dx+dy)==2) cnt++;
            else if (x+y==s && dx+dy==0) cnt++; 
        }
        cout << cnt << '\n';
    }
    return 0;
}