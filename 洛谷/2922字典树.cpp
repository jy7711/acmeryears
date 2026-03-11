#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 7;
const int M = 5e5 + 7;
int n, m;
struct Trie {
    int nex[M][2];//01字典树
    int cnt;//经过节点数
    int endd;//结尾的数量
    int tt;//深度
} trie[N];

void init()
{
    memset(trie[0].nex[0], 0, sizeof(trie[0].nex[0]));
    trie[0].cnt = 0, trie[0].endd = 0;
    trie[0].tt = 1;
    return;
}

void insert(string s)
{

}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    init();
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        int mm; cin >> mm;
        string s; cin >> s;
        for (int i = 0; i < mm; i++) {
            char c; cin >> c; s += c;
        }
        insert(s);
    }
    return 0;
}