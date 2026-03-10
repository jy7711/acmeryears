#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    //deque双端队列
    //支持头尾插入删除
    deque<int> dq;
    deque<int> de1(5,0);//这点与vector相同
    //vector同样可以这么建
    deque<int> de2(de1);// 拷贝构造
    deque<int> de3(de1.begin(),de1.end());// 通过迭代器范围初始化
    
    //赋值
    de1 = de3;                        // 赋值运算符
    de1.assign(3, 100);               // 分配3个值为100的元素
    de1.assign(de2.begin(), de2.end()); // 通过迭代器范围赋值

    //添加删除元素
    dq.push_back(1);     // 在尾部插入元素//1
    dq.push_front(2);    // 在头部插入元素//2 1
    dq.emplace_back(3);  // 在尾部原地构造元素（避免复制，更高效）//2 1 3
    dq.emplace_front(4); // 在头部原地构造元素//4 2 1 3
    
    dq.pop_back();       // 删除尾部元素（不返回该元素）
    dq.pop_front();      // 删除头部元素（不返回该元素）
    dq.erase(dq.begin()); // 删除指定位置元素
    dq.erase(dq.begin(), dq.begin() + 2); // 删除区间元素
    dq.clear();          // 清空所有元素
//ps:在调用pop_back()或pop_front()前，应确保双端队列非空，否则可能导致未定义行为。
    
    //访问元素
    int first = dq.front();    // 获取头部元素
    int last = dq.back();      // 获取尾部元素
    int elem = dq[1];          // 通过下标访问（不检查边界）
    int elem2 = dq.at(1);      // 通过at访问（越界时抛出std::out_of_range异常）

    for(auto &ele : dq) cout << ele << ' ';
    cout << dq.size();
    return 0;
}