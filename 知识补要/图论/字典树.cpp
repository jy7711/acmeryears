#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

struct Trie {
    int nxt[MAXN][26];  // 26个分支
    int cnt[MAXN];      // 经过节点的单词数
    int ed[MAXN];       // 以节点结尾的单词数
    int tot;
    
    void init() {
        memset(nxt[0], 0, sizeof(nxt[0]));
        cnt[0] = ed[0] = 0; 
        tot = 1; //根节点是空的
    }
    
    void insert(string s) {
        int cur = 0;
        for(char c : s) {
            int id = c - 'a'; //字母的序号， 每个存在哪一列
            if(!nxt[cur][id]) {
                memset(nxt[tot], 0, sizeof(nxt[tot]));
                nxt[cur][id] = tot++; //当前深度初始化
            }
            cur = nxt[cur][id]; 
            cnt[cur]++;
        }
        ed[cur]++; //单词遍历到结尾， 结尾处++
    }
    
    int query(string s) {  // 查询s作为前缀的次数
        int cur = 0;
        for(char c : s) {
            int id = c - 'a'; //字母的序号， 每个存在哪一列
            if(!nxt[cur][id]) return 0; //到结尾了
            cur = nxt[cur][id]; // 
        }
        return cnt[cur]; //返回次数
    }
} trie;

int main() {
    trie.init();
    trie.insert("hello");
    trie.insert("world");
    trie.insert("hi");
    
    cout << trie.query("h") << endl;    // 输出：2（hello和hi）
    cout << trie.query("he") << endl;   // 输出：1（hello）
    
    return 0;
}