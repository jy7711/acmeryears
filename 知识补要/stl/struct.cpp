#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct py{
    int x,y;
    string s;
};
bool cmp(py a,py b){
    if(a.x == b.x) return a.y < b.y;
    return a.x < b.x;// 
}
int main()
{
    vector<py> a(5);
    for(int i = 0;i < 5;i++){
        cin >> a[i].x >> a[i].y;
        cin >> a[i].s;
    }
}