#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n; 
	cin >> n;
	ll score, number;
	vector<pair<ll, ll> > p;
	for (int i = 0; i < n; i++) {
		cin >> score >> number;
		p.push_back({score,number});
	}
	sort(p.begin(), p.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b) {
        if (a.first != b.first) {
            return a.first > b.first; 
        } else {
            return a.second < b.second; 
        }
    });
	
	int k;
	while (cin >> k) {
		cout << p[k-1].second << endl;
	}
	return 0;
}
