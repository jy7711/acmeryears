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
    // 找出 n 的所有因子，存入 vec
    vector<int> vec;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            vec.push_back(i);
            if (i * i != n) vec.push_back(n / i);
        }
    }
    sort(vec.begin(),vec.end());
    // n = 24
    //i=1: 24%1==0，加入 1 和 24/1=24 → vec 现在为 [1, 24]
    // i=2: 24%2==0，加入 2 和 24/2=12 → vec 现在为 [1, 24, 2, 12]
    // i=3: 24%3==0，加入 3 和 24/3=8 → vec 现在为 [1, 24, 2, 12, 3, 8]s
    // i=4: 24%4==0，加入 4 和 24/4=6 → vec 现在为 [1, 24, 2, 12, 3, 8, 4, 6]
    //[1, 2, 3, 4, 6, 8, 12, 24]
    return 0;
}