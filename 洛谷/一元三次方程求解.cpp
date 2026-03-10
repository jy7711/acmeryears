#include <bits/stdc++.h>
using namespace std;
#define int long long 
double a,b,c,d;
double cal(double x) {
    return a*x*x*x + b*x*x + c*x + d;
}
int cnt = 0;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> a >> b >> c >> d;
    for (double i = -100; i <= 100; i++)  {
        if (cal(i) == 0) {
            printf("%.2lf ",i); 
            cnt++; 
            //continue;
        }
        if (cal(i)*cal(i+1) < 0) {
            double l = i, r = i + 1, mid = l + (r-l)/2;
            while (l+0.001 <= r) {
                mid = l + (r-l)/2;
                if (cal(mid)*cal(r)<=0) l = mid;
                else r = mid;   
            }
            printf("%.2lf ",r);
            cnt++;    
        }
        if (cnt == 3) return 0;
    }
    return 0;
}