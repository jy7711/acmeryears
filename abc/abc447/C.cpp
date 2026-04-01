#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string find(string s)
{
    string res;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'A') res += s[i];
    } 
    return res;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    string s1, s2; cin >> s1 >> s2;
    if (find(s1) != find(s2)) {
        cout << "-1\n";
        return 0;
    }
    //想到了用另一种方法去解决这个问题， 以非A的字母为间隔， 去统计每段A的差异
    //但我想知道这种方法有什么问题, 难道是少加了s1多出来的一段？ 
    //还真是
    ll ans = 0;
    int l = 0; //s1指针
    for (int r = 0; r < s2.size(); r++) {
        //循环size(s2)次， 每次只要处理一个字母
        if (s2[r] == s1[l]) l++;
        else {
            if (l >= s1.size()) ans++; //少的部分全是A
            else {
                //说明此时s1[l]的位置不是A, 那么这时缺少的A需要花费补
                if (s2[r] == 'A') ans++;
                //否则说明s1[l]的位置是A, 需要花费删除
                else while (l < s1.size() && s1[l] != s2[r]) ans++, l++;
                if (s2[r] == s1[l]) l++;
            }
        }
    }
    if (l < s1.size()) ans += s1.size()-l; 
    cout << ans << '\n';
    return 0;
}