#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 2e5 + 7;
//邻接表 ： 规模大的稀疏图
//没学完
struct edge {
    int from, to;
    ll w;
    edge(int a, int b, ll c) {from = a; to = b; w = c;}
    edge() {}
};
vector<edge> e[N];
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0); 
    for (int i = 0; i < N; i++) e[i].clear();
    int u , v, w;
    e[u].push_back(edge(u,v,w));                                                           
    return 0;
}