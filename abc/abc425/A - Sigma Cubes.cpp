#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n; cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        ll x = i*i*i;
        if (i%2 == 1) sum -= x;
        else sum += x;
    }
    cout << sum;
    return 0;
}