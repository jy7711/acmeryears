#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<ll> scores(n);
    vector<ll> numbers(n);
    
    for (int i = 0; i < n; i++) {
        cin >> scores[i] >> numbers[i];
    }
    
    vector<int> indices(n);
    for (int i = 0; i < n; i++) {
        indices[i] = i;
    }
    sort(indices.begin(), indices.end(), [&](int i, int j) {
        if (scores[i] != scores[j]) {
            return scores[i] > scores[j]; 
        } else {
            return numbers[i] < numbers[j];
        }
    });
    
    int k;
    while (cin >> k) {
        cout << numbers[indices[k-1]] << endl;
    }
    
    return 0;
}
