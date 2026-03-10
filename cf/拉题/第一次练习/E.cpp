#include<bits/stdc++.h>
#define int long long
using namespace std;
void ac(){
	int n, m; cin >> n >> m;
    if (n == 1 && m == 1) cout << "0\n";
	else if (n == 1 || m == 1) cout << "1\n";
	else cout << "2\n";
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t; cin >> t;
    while (t--) ac();
	return 0;
} 