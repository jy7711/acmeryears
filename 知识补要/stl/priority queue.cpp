#include <bits/stdc++.h>
using namespace std;
int main()
{
    //优先队列priority queue;
    /*大顶堆*从大到小排序*/priority_queue<int> pque;
    /*小顶堆*///priority_queue<int, vector<int> , greater<int>> pque;
    
    /*
        无论是大堆顶还是小堆顶， 在贪心排序中都是极好用的，灵活运用pop
    */
    pque.push(1);
    cout << pque.top();
    pque.push(3);
    cout << pque.top();
    pque.push(2);
    cout << pque.top();
    pque.push(4);
    cout << pque.top();
    pque.pop();
    cout << pque.top();
    //只能访问堆顶 所有元素不可写
    
    //堆顶可以修改
    int tp = pque.top();//对堆顶读数
    pque.pop();//取出
    pque.push(tp + 1);//加一存入
}