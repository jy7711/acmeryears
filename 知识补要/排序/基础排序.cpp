#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    //给定一数组
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    //选择排序
    for (int i = 0; i < n; i++) {
        int ii = i;
        for (int j = i+1; j < n; j++) {
            if (a[ii] > a[j]) ii = j;
        }
        swap(a[ii],a[i]);
    }

    //冒泡排序
    // bool flag = 1;
    // while (flag) {
    //     flag = 0;
    //     for (int i = 0; i < n-1; i++) {
    //         if (a[i] > a[i+1]) {
    //             swap(a[i],a[i+1]);
    //             flag = 1;
    //         }
    //     }
    // }
    //插排好抽象，看这个理解吧
    // 初始: [5, 2, 4, 6, 1, 3]
    // 第1轮: [2, 5, 4, 6, 1, 3]  (插入2)
    // 第2轮: [2, 4, 5, 6, 1, 3]  (插入4)
    // 第3轮: [2, 4, 5, 6, 1, 3]  (插入6)
    // 第4轮: [1, 2, 4, 5, 6, 3]  (插入1)
    // 第5轮: [1, 2, 3, 4, 5, 6]  (插入3)
//     void insertion_sort(int arr[], int len) {
//   for (int i = 1; i < len; ++i) {      // 从第二个元素开始遍历
//     int key = arr[i];                  // 保存当前要插入的元素
//     int j = i - 1;                     // 从当前元素的前一个开始比较
    
//     // 寻找key的正确插入位置
//     while (j >= 0 && arr[j] > key) {   // 前移直到找到合适位置
//       arr[j + 1] = arr[j];             // 元素后移
//       j--;                             // 继续向前比较
//     }
//     arr[j + 1] = key;                  // 插入key到正确位置
//   }
// }

    for (auto &ele : a) cout << ele << ' ';
    return 0;
}