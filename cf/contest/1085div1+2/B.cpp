#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    //配合输出调试食用效果更佳
    //神人题目3个小时看懂样例，3个小时写不明白代码
    //我说好shi多吃有没有懂的
    //输入
    int n, m, l;
    cin >> n >> m >> l;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    
    //余下的是最后加上的无法改变的值， 直接加在最终答案上
    int yu = l - a[n];
    //cout << yu << ' ';

    //用b来储存每段增加的值，即两次“分数清零期间能加多少”
    vector<int> b;
    for (int i = 1; i <= n; i++) {
        if (i == 1) b.push_back(a[i]);
        else b.push_back({a[i] - a[i - 1]});
    }

    // for (int x : b) cout << x << ' ';
    // cout << '\n';
    
    //用c来记录当前需要维护的动画效果， 即要维护几个值
    //为什么不是只维护两个值而是这样维护
    //这是第五组样例的手玩， 很难想象这竟然是我和动画博弈
    //每次我为了使最大值最小每次肯定要删最后一个
    //而动画为了使这个结果更大会使这个最大值尽可能小
    //即尽可能把每个b[i]的值均摊到每个值头上
    //为什么前面是m个后面不是m个呢
    //因为当后面处理次数少于m次时（a.size() < m）时
    //我们只需要维护剩余次数加一个， 这样最后所有处理完之后只剩一个值， 避免多余的浪费
    // 0 0 1 1 1  3
    // 3 3 3 3 4  16
    // 3 3 3 3 3  15
    // 4 4 4 4 4  20
    // 4 5 5 5 5  24
    // 6 7 7 7    27
    // 7 7 7      21
    // 9 10       19
    // 9 + 10
    vector<int> c(n, 0);
    c[n-1] = min(m, 2); //从后往前加， 最大是m
    for (int i = n - 2; i >= 0; i--) c[i] = min(c[i + 1] + 1, m);

    // for (int x : c) cout << x << ' ';
    // cout << '\n';

    multiset<int> s;
    //这段更是 始终是
    //我们每次操作需要删除最大的， 然后再对较小的从小到大进行均匀的增加（这一段卡了好久）
    //删除的次数有很多肯定不能用vec（应该能？） 
    //有重复的所以用multiset
    for (int i = 0; i < n; i++) {
        if (b[i] == 0) continue;
        //维护s的大小始终是c[i]
        //因为我们在循环结束的时候删掉了一个 
        //如果c[i]并没有减少的话， 需要补充个零进去
        //不算这个零的话也是不对的
        while (s.size() < c[i]) s.insert(0);

        //先存到vector里面， （排序）
        vector<ll> v(s.begin(), s.end());
        int k = v.size();
        sort(v.begin(), v.end());
        ll remaining = b[i];//要加的总和
        //如何平均的把他们加进去（维护最小值最大）
        int j;//划重点， 我觉得这里非常巧妙
        for (j = 0; j < k - 1; j++) {
            //记录和下一个的差值， 即前j个数变成v[j+1]的need
            ll diff = v[j + 1] - v[j];
            ll need = diff * (j + 1);//神奇，无需多言
            if (remaining >= need) {
                remaining -= need;
                // （满足）将前 j+1 个数提升到 v[j+1]
                for (int t = 0; t <= j; t++) v[t] = v[j + 1];
            } 
            else break;//否则就推出
        }
        //如果是遍历完退出的
        if (j == k - 1) {
            // 所有数已相等，剩余资源平均分配
            ll avg = remaining / k;
            ll r = remaining % k;
            for (int t = 0; t < k; t++) {
                v[t] += avg;//每个都加这么多
                if (t >= k - r) v[t] += 1;//余数（r）个数每个加一
            }
        } 
        //没遍历完中途退出
        else {
            // 前 j+1 个数分配剩余资源（前j+1个数是相同的）
            ll each = remaining / (j + 1);
            ll r = remaining % (j + 1);
            for (int t = 0; t <= j; t++) {
                v[t] += each;//与上面同理
                if (t >= (j + 1) - r) v[t] += 1;
            }
            // 后面的数保持不变
        }
        // 重新放回 multiset
        s.clear();//原来的清空
        for (ll x : v) s.insert(x);//新的塞进去

        // for (int cc : s) cout << cc << ' ';
        // cout << '\n';
        
        s.erase(--s.end());//删去尾， 即最大值
    }
    //如果只有一个动画最后删除了就只有余数了
    cout << (s.size() ? *s.rbegin() : 0) + yu << '\n';
    //cout << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}
