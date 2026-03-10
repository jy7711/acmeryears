#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 7;
int a[N];
void ac(){
	int b,w; cin >> w >> b;
    int l = upper_bound(a,a+N,w+b) - a;
    cout << l - 1 << '\n';
    return;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t; cin >> t;
    a[0] = 0; a[1] = 1;
    for (int i = 2; i < 1e5; i++) a[i] = a[i-1] + i;
    while (t--) 
    ac();
	return 0;
} 