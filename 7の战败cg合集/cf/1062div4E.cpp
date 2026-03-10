#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll t,n,k,x,l,r,ans;
const int N = 2e5+7;
int a[N];
vector<pair<ll,ll>> b;
bool check(ll d) 
{
    //这个暴力解应该是对的，但是太暴力会超时
    //nnd过了多久还没补
    //这他妈太暴力了吧， 真的动脑了吗
    //1600就这(已补)
    ll cnt = 0; 
    //cout << "d : " << d << '\n';
    for (int i = 0; i < b.size(); i++) {
        if (i == 0) {
            if (b[i].second >= d) cnt += b[i].second - d + 1;
        }
        else if (i == b.size()-1) {
            if (x-b[i].first >= d) cnt += x - b[i].first - d + 1;
        }
        else {
            if (b[i].second - b[i].first >= d*2) cnt += b[i].second - b[i].first - d*2 + 1;
        }
        //cout << cnt << ' ';
    }
    //cout << '\n';
    return cnt >= k;
}
void solve(ll d) {
    //这里用set insert也对了，也就是说问题只是出在ans==0的特判上，与n+k > x+1 不等价
    priority_queue<pair<int,int>> q;
    //cout << d << '\n';
    for (int i = 0; i < b.size(); i++) {
        if (i == 0) {
            if (b[i].second >= d) {
                for (int j = 0; j <= b[i].second-d; j++) {
                    q.push({b[i].second-j+1, j});
                }
            }
        }
        else if (i == b.size()-1) {
            if (x-b[i].first >= d) {
                for (int j = x; j >= b[i].first+d; j--) {
                    q.push({j-b[i].first+1, j});
                }
            }
        }
        else {
            if (b[i].second - b[i].first >= d*2) {
                for (int j = b[i].first+d; j <= b[i].second-d; j++) {
                    q.push({min(j-b[i].first+1,b[i].second-j+1), j});
                }   
            }
        }
    }
    int cc = k;
    while (cc--) {
        cout << q.top().second << ' ';
        q.pop();
    }
    cout << '\n';
    return;
}
void ac() 
{
    b.clear();
    cin >> n >> k >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    // for (int i = 0; i < n; i++) cout << a[i] << ' ';
    // cout << '\n';
    
    b.push_back({0, a[0]});
    for (int i = 1; i < n; i++) {
        b.push_back({a[i-1],a[i]});
    }
    b.push_back({a[n-1], x});
    sort(b.begin(),b.end());
    //for (int i = 0; i < b.size(); i++) cout << b[i].first << ' ' << b[i].second << '\n';
    l = 0, r = x; ans = 0;
    while (l <= r) {
        ll mid = l+(r-l)/2;
        if (check(mid)) l = mid+1,ans = mid;
        else r = mid-1;
    }
    //凹了半天最后发现是你错了 特判条件不能写 n+k > x+1
    if (ans == 0) {
        for (int i = 0; i < k; i++) cout << i << ' ';
        cout << '\n';
        return;
    }
    solve(ans);
    return;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> t;
    while (t--) ac();
    return 0;
}                                                                                            