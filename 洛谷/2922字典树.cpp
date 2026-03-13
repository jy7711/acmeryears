#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 7;
const int M = 5e5 + 7;
int n, m;
int nex[M][2];//01字典树， nex[cur][char] = 下个节点编号
int cnt[M];//经过该节点数量 
int endd[M];//以该节点为结尾的数量
int tt = 1;//当前深度

void insert(string s)
{
    int cur = 0;//开始位置
    for (char c : s) {
        int bit = c - '0';//当前字符
        //当前分支不存在， 创建新节点
        if (!nex[cur][bit]) nex[cur][bit] = tt++;
        cur = nex[cur][bit]; //更新当前位置
        cnt[cur]++; //经过数+1
    }
    endd[cur]++; //单词结束， 结尾++
    return;
}

void search(string s) 
{
    int cur = 0, ans = 0;
    for (char c : s) {
        int bit = c - '0';
        //路径中断
        if (!nex[cur][bit]) {
            cout << ans << '\n';
            return;
        } 
        cur = nex[cur][bit];
        ans += endd[cur];
    }
    cout << ans + cnt[cur] - endd[cur] << '\n';
    return;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        int mm; cin >> mm;
        string s;
        for (int j = 0; j < mm; j++) {
            char c; cin >> c; s += c;
        }
        insert(s);
    }
    for (int i = 0; i < n; i++) {
        int nn; cin >> nn;
        string s;
        for (int j = 0; j < nn; j++) {
            char c; cin >> c; s += c;
        }
        search(s);
    }
    return 0;
}
