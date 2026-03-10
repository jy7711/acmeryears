#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct jy {
    int x, y, z;
};

bool cmp(pair<int , int> a, pair<int , int> b)
{
    // 第二位从小到大
    if (a.second != b.second)
        return a.second < b.second;
    // 第一位从大到小
    return a.first > b.first;
}

bool cmp(jy j, jy y) 
{
    return j.x > b.y;
}
int main()
{
    vector<pair<int , int>> arr{{1,9},{2,9},{8,1},{0,0}};
    sort(arr.begin(), arr.end(), cmp);
    for (auto ele : arr)
        cout << ele.first << " " << ele.second <<endl;
}