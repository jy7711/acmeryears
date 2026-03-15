#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll h, w, q, r, c; 
vector<set<int>> a, b;
void init()
{
    a.resize(h+1);  b.resize(w+1);
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) a[i].insert(j), b[j].insert(i);
    }
    return;
}
void allerase(int r, int c)
{   
    if (a[r].count(c)) {
        a[r].erase(c); b[c].erase(r);
        //如果还活着直接炸了回家
        return;//不然就要炸四块（悲
    }

    //删左边
    auto itl = a[r].lower_bound(c);//寻找大于等于c的第一个数
    if (itl != a[r].begin()) {
        --itl; auto it = *itl;//寻找小于c的第一个数
        a[r].erase(itl), b[it].erase(r);
    }
    
    //删右边
    //这里upper_bound和lower_bound应该不影响
    auto itr = a[r].lower_bound(c);//寻找大于等于c的第一个数
    if (itr != a[r].end()) {
        auto it = *itr;//不存的话itr在erase之后会消失的
        a[r].erase(itr), b[it].erase(r);
    }
    
    //删下面
    auto itd = b[c].lower_bound(r);//寻找大于等于r的第一个数
    if (itd != b[c].begin()) {
        --itd; auto it = *itd;//寻找小于r的第一个数
        b[c].erase(itd), a[it].erase(c);//好绕你到底要删什么
    }
    
    //删上面
    auto itu = b[c].lower_bound(r);//寻找大于等于c的第一个数
    if (itu != b[c].end()) {
        auto it = *itu;//不存的话itr在erase之后会消失的
        b[c].erase(itu), a[it].erase(c);
    }

    //666万恶的hacker,因为上下懒得用二分优化就被卡t了
    //如果上下也要搜的话就要用内存换时间，再建一个竖着的set表，同时删
    //可恶代码怎么这么长了,可恶样例怎么不对了
    //悲伤的发现b的存法和a不太一样
    //belike :  1 2
    //1 2 3 4   1 2
    //1 2 3 4   1 2
    //          1 2
    //所以导致了删上面和删下面会出现问题，相似了， 决定保留尸体
    //a[r]删c b[c]删r 没问题
    // for (int i = r-1; i >= 1; i--) {
    //     if (a[i].count(c)) {
    //         a[i].erase(c);
    //         break;
    //     }
    // }
    // for (int i = r+1; i <= h; i++) {
    //     if (a[i].count(c)) {
    //         a[i].erase(c);
    //         break;
    //     }
    // }
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> h >> w >> q;
    init();

    while (q--) {
        cin >> r >> c;
        allerase(r, c);
    }
    
    ll ans = 0;
    for (int i = 1; i <= h; i++) ans += a[i].size();
    cout << ans << '\n';
    return 0;
}