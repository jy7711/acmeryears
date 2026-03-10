#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        char a[n+1][n+1];
        if (k == n*n-1) { cout << "NO\n"; continue; }
        else cout << "YES\n";
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) a[i][j] = 'D';
        }
        for (int i = 1; i <= (n*n-k)/n; i++) a[n][i] = 'U';
        if ((n*n-k)%n != 0) a[(n*n-k)%n][(n*n-k)/n+1] = 'U';
        if ((n*n-k)%n == 1) a[(n*n-k)%n][(n*n-k)/n+1] = 'L';
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) cout << a[i][j];
            cout << '\n';
        }
    }
    return 0;
}