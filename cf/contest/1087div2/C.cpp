#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool q(int a, int b)
{ 
    cout << "? " << a << ' ' << b << endl;
    bool x; cin >> x;
    return x;
}
void ac()
{
    //不难的，应该赛时能写出来的
    //给一个整数n， 随机一个2n数组 1 2 3 0 0 0
    //在n+1次查询内，找到一个0
    //大致思路 ： 留四个数下来， 进行n-2次查询
    //如果查询结果为1，即这两个数都是0,随便输出一个即可
    //否则， 在最坏情况下，每次查询消耗一个非零数， 一个0
    //如果消耗了两个非零数， 在n-2次查询前必会出现两个0
    //我是傻呗打'\n'习惯了， 交互题一定要用endl
    int n; cin >> n;
    for (int i = n; i > 2; i--) {
        //把i*2,i*2-1打成n*2,n*2-1真气笑了
        bool res = q(i*2, i*2-1);
        if (res) {
            cout << "! " << i*2 << endl;
            return;
        }
    }
    bool x = q(1,2);
    bool y = q(1,3);
    bool z = q(2,3);
    if (x || y) cout << "! 1" << endl;
    else if (z) cout << "! 2" << endl;
    else cout << "! 4" << endl;
    return;
}
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}