#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    string a, b; cin >> a >> b;
    map<char,int> mp, mpp;
    for (int i = 0; i < a.size(); i++) mp[a[i]]++;
    for (int i = 0; i < b.size(); i++) mpp[b[i]]++;
    for (auto &ele : mp) {
        if (ele.second > mpp[ele.first]) {
            cout << "Impossible\n";
            return;
        }
        else mpp[ele.first] -= ele.second;
    }
    int j = 0;
    for (auto &ele : mpp) {
        if (a[j] <= ele.first && j < a.size()) {
            while (a[j] <= ele.first && j < a.size()) {
                cout << a[j++];
            }
        }
        for (int i = 0; i < ele.second; i++) cout << ele.first;
    }
    cout << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}