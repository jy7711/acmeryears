#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac() 
{
    double a, b, c; cin >> a >> b >> c;
    if (!a && !b && !c) {
        cout << "-1\n";
        return;
    }
    else if (!a && !b) {
        cout << "0\n";
        return;
    }
    if (!a) {
        cout << "1\n" << -c/b << '\n';
        return;
    }
    double d = b*b-4*a*c;
    double e = -b/2/a;
    if (d < 0) cout << "0\n";
    else if (d == 0) cout << "1\n" << e << '\n';
    else {
        d = sqrt(d);
        d = d/2/a;
        cout << "2\n" << min(e-d,e+d) << '\n' << max(e-d,e+d) << '\n';
    } 
    return;    
}

int main() 
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;   
    cout << fixed << setprecision(10); //保留小数 
    while (t--) ac();
    return 0;
}