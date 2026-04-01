#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    string s; cin >> s;
    int j = 0, k = 0, cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            j = max(j, i + 1);//忘判断最大值了， wa
            while (j < s.size() && s[j] != 'B') j++;
            k = max(k, j + 1);
            while (k < s.size() && s[k] != 'C') k++;
            if (j >= s.size() || k >= s.size()) break; 
            if (s[i] == 'A' && s[j] == 'B' && s[k] == 'C') j++, k++, cnt++; 
        }
    }
    cout << cnt << '\n';
    return 0;
}