#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        double x1,y1,x2,y2,d;
        cin >> x1 >> y1 >> x2 >> y2;
        vector<double> a(n); 
        double sum = 0, mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            mx = max(mx,a[i]);
        }
        d = sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
        sum+=d; mx = max(mx,d);
        if (mx <= sum-mx) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}