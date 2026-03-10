#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N = 4e5 + 7;
int a[N];
void ac(){
	int n, k; cin >> n >> k;
    for (int i = 0; i < k; i++) cin >> a[i];
    int ans = 0, sum = 0;
    sort(a,a+k);
    for (int i = k-1; i>= 0; i--) {
        sum += n - a[i];
        if (sum < n) ans++;
        else break;
    }
    cout << ans << '\n';
    return;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t; cin >> t;
    while (t--) ac();
	return 0;
} 