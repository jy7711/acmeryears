#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e6+7, M = 2e6+7;// 最大节点数  最大边数
int cnt = 0, head[N];
struct {
    //终点，连接 ，边权
    int to, next, w;
} edge[M];
void addedge(int u, int v, int w)
{   // u --w--> v, 从u到v 
    edge[cnt].to = v; 
    edge[cnt].next = head[u];
    edge[cnt].w = w;
    head[u] = cnt; 
    cnt++;//更新cnt避免重复
}
//head记录从哪个点开始， edge[head[2]].to即为这条边去的地方， 然后 i 从 head[2] --> edge[head[2]].next
//算了你直接背吧
int main()
{
    int n, m, u, v, w; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        addedge(u, v, w);
    } 
    for (int i = head[2]; i > 0; i = edge[i].next) //遍历节点2的所有邻居
        cout << edge[i].to << ' '; //输出 ： 5 4 3 2 1
}
// #include <iostream>
// #include <cstring>
// using namespace std;

// const int MAXN = 1000;   // 最大节点数  
// const int MAXM = 10000;  // 最大边数

// struct Edge {
//     int to;     // 边的终点
//     int w;      // 边的权重（如果没有权重，可以去掉）
//     int next;   // 下一条边的下标
// } edge[MAXM];

// int head[MAXN]; // 每个节点的第一条边
// int cnt;        // 当前边的数量

// void init() {
//     memset(head, -1, sizeof(head));
//     cnt = 0;
// }

// void addEdge(int u, int v, int w) {
//     edge[cnt].to = v;
//     edge[cnt].w = w;
//     edge[cnt].next = head[u];
//     head[u] = cnt++;
// }

// int main() {
//     init();
//     // 添加边
//     addEdge(0, 1, 2);
//     addEdge(0, 2, 3);
//     addEdge(1, 3, 4);
//     addEdge(2, 3, 5);
//     addEdge(1, 2, 1);

//     // 遍历每个节点的出边
//     for (int u = 0; u < 4; u++) {
//         cout << "Node " << u << ": ";
//         for (int i = head[u]; i != -1; i = edge[i].next) {
//             cout << "->" << edge[i].to << "(" << edge[i].w << ") ";
//         }
//         cout << endl;
//     }
//     return 0;
// }