#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
bool p[N];

void prime()
{
    for (int i = 2; i*i <= 2e5 + 2; i++) {
        if (!p[i]) {
            for (int j = i*i; j <= 2e5 + 2; j+= i) {
                p[j] = 1;
            }
        }
    }
}
void ac()
{
    int n; cin >> n;
    
    if (n <= 4) {
        cout << "-1\n";
        return;
    }
    else {
        int x;
        for (int i = 1; i <= n; i += 2) x = i, cout << i << ' ';
        for (int i = 2; i <= n; i += 2) {
            if (p[x+i]) {
                cout << i << ' ';
                x = i; break;
            }
        }
        for (int i = 2; i <= n; i += 2) {
            if (x == i) continue;
            cout << i << ' ';
        }
        cout << '\n';
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    prime();

    int t; cin >> t; 
    while (t--) ac();
    return 0;
}