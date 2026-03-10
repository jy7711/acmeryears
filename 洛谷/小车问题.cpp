#include <bits/stdc++.h>
using namespace std;
#define int long long 
double s,a,b,ans,x;
//懒狗不想写二分解，故留下题目链接：https://www.luogu.com.cn/problem/P1258
// bool check(double t) {
//     if (a*t*2 + b*t - >= s*2) return 1;
//     else return 0;
// }
// signed main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0),cout.tie(0);
//     cin >> s >> a >> b;
//     double l = s/a, r = s/b, mid;
//     while (l <= r) {
//         mid = l + (r-l)/2;
//         if (check(mid)) l = mid;
//         else r = mid;
//     }
//     printf("%.6lf", r);
//     return 0;
// }
//数学解
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> s >> a >> b;
    x = (a+b)*s/(3*a+b);
    printf("%.6lf", x/b + (s-x)/a);
    return 0;
}