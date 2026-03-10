#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t,n,k,l,r,b,c,kk;
ll ans, anss;
int main()
{
    //1500 双指针
    //卡了大概三天这个样子，一开始while循环死活写不明白双指针，
    // 后来改用for能稳定写出来正确的区间范围，但对左指针的答案统计仍存有疑问
    //看题解想到再写一遍每个区间的最短区间范围,而第一遍循环统计的是最大的，
    //最后for循环统计一下每个区间的答案，用bool数组判断条件不成立的情况，最后也是a了
    //好题 tq
    //题目链接：https://codeforces.com/contest/2149/problem/E
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n >> k >> l >> r;
        vector<int> a(n), an(n), as(n); map<int,int> mp;
        vector<bool> gg(n,1);
        for (int i = 0; i < n; i++) cin >> a[i];
        ans = 0; b = 0; c = 0; kk = 0;
        for (c = 0; c < n; c++) {
            mp[a[c]]++;
            if (mp[a[c]] == 1) kk++;
            while (c-b+1 > r || kk > k) {
                mp[a[b]]--;
                if (mp[a[b]] == 0) kk--;
                //else anss++;
                b++;
            }
            an[c] = b; 
            if (c-b+1 < l || kk < k) gg[c] = 0;
        }
        mp.clear(); b = 0; kk = 0; 
        for (c = 0; c < n; c++) {
            mp[a[c]]++;
            if (mp[a[c]] == 1) kk++;
            while (c-b+1 > r || kk > k) {
                mp[a[b]]--;
                if (mp[a[b]] == 0) kk--;
                //else anss++;
                b++;
            }
            while (c-b+1 > l && mp[a[b]] != 1 && kk == k) {
                mp[a[b]]--;
                if (mp[a[b]] == 0) kk--;
                b++;
            }
            as[c] = b; 
            if (c-b+1 < l || kk < k) gg[c] = 0;
        }
        for (int i = 0; i < n; i++) {
            if (gg[i]) ans += max(0,as[i]-an[i]+1);
            //cout << i << ' ' << as[i] << ' ' << an[i] << ' ' << ans << '\n';
        }
        cout << ans << "\n";
    }
    return 0; 
}