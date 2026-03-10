#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    //这题有点奇怪，用endl就对了
    //6 ,原来是我flush写前面去了，写后面就对了
    int l = 1, r = 1e9, mid, res = 100, cnt = 0;
    for (; l <= r && cnt < 50; cnt++) {
        mid = l + (r-l)/2;
        //cout << mid << endl;
        cout << mid << '\n' << flush;
        cin >> res;
        if (res == 0) return 0;
        else if (res == 1) r = mid - 1;
        else if (res == -1) l = mid + 1;
        else ;
    }
    return 0;
}