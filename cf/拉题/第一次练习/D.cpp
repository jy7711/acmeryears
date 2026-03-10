#include <bits/stdc++.h>
using namespace std;
#define int long long 
void ac() {
    int n, m, rb, cb, rd, cd;
    cin >> n >> m >> rb >> cb >> rd >> cd;
    int ans = 0; int turn = 1;
    //turn 储存移动方向 1：rd; 2: ru; 3: lu; 4: ld;
    if (turn == 1) {
        if (rb == n) turn = 2;
        if (cb == m) turn = 4;
        if (rb == n && cb == m) turn = 3;
    }
    else if (turn == 2) {
        if (rb == 1) turn = 1;
        if (cb == m) turn = 3;
        if (rb == 1 && cb == m) turn = 4;
    }
    else if (turn == 3) {
        if (rb == 1) turn = 4;
        if (cb == 1) turn = 2;
        if (rb == 1 && cb == 1) turn = 1;
    }
    else {
        if (rb == n) turn = 3;
        if (cb == 1) turn = 1;
        if (rb == n && cb == 1) turn = 2;
    }
    while (1) {
        if (rb == rd || cb == cd) break;
        if (turn == 1) {
            rb++, cb++;
            if (rb == n) turn = 2;
            if (cb == m) turn = 4;
            if (rb == n && cb == m) turn = 3;
        }
        else if (turn == 2) {
            rb--, cb++;
            if (rb == 1) turn = 1;
            if (cb == m) turn = 3;
            if (rb == 1 && cb == m) turn = 4;
        }
        else if (turn == 3) {
            rb--, cb--;
            if (rb == 1) turn = 4;
            if (cb == 1) turn = 2;
            if (rb == 1 && cb == 1) turn = 1;
        }
        else {
            rb++, cb--;
            if (rb == n) turn = 3;
            if (cb == 1) turn = 1;
            if (rb == n && cb == 1) turn = 2;
        }
        //cout << rb << ' ' << cb << '\n';
        ans ++;
    }
    cout << ans << '\n';
    return;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}