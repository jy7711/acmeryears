#include <bits/stdc++.h>
using namespace std;
int main()
{
    //栈 先进后出
    stack<double> stk;
    stk.push(1.0);
    stk.push(1.4);
    /*cout << stk.size() << endl;
    cout << stk.top() << endl;
    stk.pop();
    cout << stk.top() << endl;*/
    //stack没有clear
    //不能访问内部元素stk[i]
    vector<double> vec;
    vec.push_back(1.0);
    vec.push_back(1.4);
    vec.pop_back();
    cout << vec.back() << endl;
}