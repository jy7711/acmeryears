#include <bits/stdc++.h>
using namespace std;
//埃式筛
const int N = 2e5 + 7;
bool ip[N];//判断素数
vector<int> pa; //打素数表
void prime()
{
    memset(ip,1,sizeof ip);//初始全赋为素数
    ip[1] = 0;
    for (int i = 2; i*i <= N; i++) {
        if (ip[i]) {//如果是素数
            for (int j = i*i; j <= N; j+=i) ip[j] = 0;//则它的倍数都不是
        }
    }
    for (int i = 2; i <= N; i++) {
        if (ip[i]) pa.push_back(i);//打表
    }
    return;
}
