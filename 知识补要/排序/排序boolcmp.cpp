#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct jy {
    int x, y, z;
    //jy按x从小到大排序
    bool operator<(const jy & j) const {
        return x < j.x;
    }
    //上面和下面是一个意思
    friend bool operator<(jy j, jy y) {
        return j.x < y.x;
    }
};

bool cmp(pair<int,int> a, pair<int,int> b)
{
    // 第二位从小到大
    if (a.second != b.second)
        return a.second < b.second;
    // 第一位从大到小
    return a.first > b.first;
}

bool cmpp(jy j, jy y) 
{
    return j.x > y.y;
}
int main()
{
    vector<pair<int,int>> a{{1,9},{2,9},{8,1},{0,0}};
    sort(a.begin(), a.end(), cmp);
    for (auto ele : a)
        cout << ele.first << " " << ele.second <<endl;
}