#include <bits/stdc++.h>
using namespace std;
int main()
{
    //set在集合中只出现一次，从小到大排序 无序是unordered_set
    set<int> st;
    st.insert(1);//插入
    st.insert(2);
    st.insert(2);
    st.insert(0);
    st.erase(2);//擦除
    if(st.find(1) != st.end()) {
        cout << "yes" << endl;//找到这个元素返回yes  例 find(1)cout << "yes" find(2)不输出
    }
    //st.find(1) != st.end() 等价于 st.count(1)
    cout << st.size() << endl;
    st.clear();
    cout << st.empty() << endl;
    for (auto & ele : st)
    cout << ele << endl;
// 只能  用迭代器进行遍历  不能st[1]索引
    for(set<int> ::iterator it = st.begin(); it != st.end(); it++)
    cout << *it << endl;
//基于范围的循环
    for (auto & ele : st)
    cout << ele << endl;
//适用情形 1.元素去重 2.维护顺序 3.查找元素（判断元素是否出现过）
}