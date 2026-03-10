

// for (j = 0; j < k - 1; j++) {
//     ll diff = v[j + 1] - v[j];
//     ll need = diff * (j + 1);
//     if (remaining >= need) {
//         remaining -= need;
//         // 将前 j+1 个数提升到 v[j+1]
//         for (int t = 0; t <= j; t++) v[t] = v[j + 1];
//     } 
//     else break;
// }
// if (j == k - 1) {
//     // 所有数已相等，剩余资源平均分配
//     ll avg = remaining / k;
//     ll r = remaining % k;
//     for (int t = 0; t < k; t++) {
//         v[t] += avg;
//         if (t >= k - r) v[t] += 1;
//     }
// } 
// else {
//     // 前 j+1 个数分配剩余资源
//     ll each = remaining / (j + 1);
//     ll r = remaining % (j + 1);
//     for (int t = 0; t <= j; t++) {
//         v[t] += each;
//         if (t >= (j + 1) - r) v[t] += 1;
//     }
//     // 后面的数保持不变
// }