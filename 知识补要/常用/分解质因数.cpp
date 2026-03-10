#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n; cin >> n;
    //分解质因数，顺便求幂次
    map<int ,int> mp;
    for(int i = 2;i * i <= n;i++) {
        while(n % i == 0) {
            mp[i]++;
            n/=i;
        }
    }
    if(n > 1) mp[n]++;
    for(auto [x,y]:mp) cout << x << " " << y << endl;
    return 0;
}