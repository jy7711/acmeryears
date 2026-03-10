#include<bits/stdc++.h>
#define int long long
using namespace std;
void ac(){
	string s; cin >> s;
    bool gg = 0, jj = 0; 
    int ag = 0, aj = 0;
    for (int i = s.size()-1; i >= 0; i--) {
        if (gg) {
            if (s[i] != '0' && s[i] != '5') ag++;
            else {
                cout << ag << '\n'; return;
            }
        }
        if (jj) {
            if (s[i] != '2' && s[i] != '7') aj++;
            else {
                cout << aj << '\n'; return;
            }
        }
        if (!gg) {
            if (s[i] == '0') gg = 1;
            else ag++;
        }
        if (!jj) {
            if (s[i] == '5') jj = 1;
            else aj++;
        }
    }
    return;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t; cin >> t;
    while (t--) ac();
	return 0;
} 