#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t, n;
void ac(){
    cin >> n;
    vector<ll> a(n);
    ll cnt = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[j]%a[i]%2 == 0) {cout << a[i] << ' ' << a[j] << '\n'; return;}
        }
    }
    cout << "-1\n";
}
int main(){
    
    cin>>t;
    while(t--){
        ac();
    }
}