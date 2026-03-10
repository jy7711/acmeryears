#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void ac() {
    int n, m, l;
    cin >> n >> m >> l;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    // 构建b，注意起点为0
    vector<ll> b;
    int prev = 0;
    for (int x : a) {
        b.push_back(x - prev);
        prev = x;
    }
    ll yu = l - prev;  // 最后一段

    int k = b.size(); // n

    // 计算c
    vector<int> c(k);
    c[k-1] = min(m, 2);
    for (int i = k-2; i >= 0; i--) {
        c[i] = min(c[i+1] + 1, m);
    }

    multiset<ll> s;
    for (int i = 0; i < m; i++) s.insert(0);

    for (int i = 0; i < k; i++) {
        ll add = b[i];
        if (add > 0 && !s.empty()) {
            // 将s中的元素取出并排序
            vector<ll> cur(s.begin(), s.end()); // 升序
            s.clear();
            int sz = cur.size();
            // 模拟填坑过程
            int idx = 0;
            while (idx < sz && add > 0) {
                // 当前相同值的一批
                int j = idx;
                ll val = cur[idx];
                while (j < sz && cur[j] == val) j++;
                int cnt = j - idx; // 相同值的个数
                if (j < sz) {
                    ll next_val = cur[j];
                    ll need = cnt * (next_val - val);
                    if (add >= need) {
                        // 全部提升到next_val
                        for (int t = idx; t < j; t++) cur[t] = next_val;
                        add -= need;
                        idx = j; // 继续处理下一批
                    } else {
                        // 不足以全部提升到next，平均分配
                        ll per = add / cnt;
                        ll rem = add % cnt;
                        for (int t = idx; t < j; t++) {
                            cur[t] = val + per;
                            if (t - idx < rem) cur[t] += 1; // 余数给前几个
                        }
                        add = 0;
                        break;
                    }
                } else {
                    // 已经到最大，没有下一个值了，将剩余增量平均分配给当前这批
                    ll per = add / cnt;
                    ll rem = add % cnt;
                    for (int t = idx; t < j; t++) {
                        cur[t] = val + per;
                        if (t - idx < rem) cur[t] += 1;
                    }
                    add = 0;
                    break;
                }
            }
            // 将cur重新插入s
            for (ll v : cur) s.insert(v);
        }

        // 删除最大的元素，直到大小不超过c[i]
        while (s.size() > c[i]) {
            s.erase(--s.end());
        }
    }

    // 输出最小值加上yu
    cout << *s.begin() + yu << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) ac();
    return 0;
}