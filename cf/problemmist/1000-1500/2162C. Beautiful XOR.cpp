#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        bitset<32> bt1(a); bitset<32> bt2(a);
        bitset<32> bt3(b); bitset<32> bt4(b);
        bool jj = 0;
        for (int i = 31; i >= 0; i--) {
            if (bt2[i] == 1) jj = 1;
            if (jj) bt2.flip(i);
            if (jj) bt4.flip(i);
        }
        bitset<32> bt5(bt1^bt2);
        ll c = bt5.to_ullong();
        if (c < b) {cout << -1 << '\n'; continue;}
        else if (a == b) {cout << 0 << '\n'; continue;}
        else cout << 2 << '\n' << bt2.to_ullong() << ' ' << bt4.to_ullong() << '\n';
    }
    return 0;
}                                                                                            