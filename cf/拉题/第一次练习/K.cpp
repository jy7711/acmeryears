#include<bits/stdc++.h>
#define int long long
using namespace std;
void ac(){
    //这题其实有一个很有意思的结论
    // a^b = c; a^c = b; b^c = a;
    //并非结论，并非有意思，并非好推
    //然后硬推了一下
    //5 ^ 1 = 4
    //5 ^ 2 = 7 (111)
    //5 ^ 3 = 6
    //5 ^ 4 = 1
    //对于这样一个x 与比x小的数异或的结果不会超过x*2 ， 因为这个异或结果并不会使位数变多
    // 极限是1000(8) -> 1111(15)
    //然后根据这个结论，所有满足条件的y都会在 1-x之间以i^x的形式出现
    //正着推是 x^y = i  --> 反着推 x^i = y  
    //我不清楚这个循环是怎么把y被x^y整除完全包含的， 但是包含了， 那就自己悟吧qwq
	int x, m; cin >> x >> m;
    int ans = 0;
    for (int i = 1; i < x; i++) {
        if ((i^x) <= m && ((i^x)%i == 0 || x%i == 0) ) ans++;
        // y <= m            y被x^y整除     x被x^y整除    
    }
    cout << ans << '\n';
    return;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t; cin >> t;
    while (t--) 
    ac();
	return 0;
} 