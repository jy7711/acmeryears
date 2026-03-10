#include <bits/stdc++.h>
using namespace std;
int main()
{
    //队列 先进先出
    queue<int> que;
    que.push(1);
    que.push(2);
    que.push(3);
    cout << que.front() << "\n";
    cout << que.back() << "\n";
    que.pop();
    cout << que.front() << "\n";
    cout << que.back() << "\n";
    que.pop();
    cout << que.front() << "\n";
    cout << que.back() << "\n";
    cout << que.size() << endl;
    cout << que.empty() << endl;
    //不能只直接访问
}