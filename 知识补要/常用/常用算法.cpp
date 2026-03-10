#include <bits/stdc++.h>
using namespace std;
int main()
{
    //cout << fixed << setprecision(10); 保留小数
    //swap(a,b); swap可以交换string
    //sort(a.begin(),a.end()); 排序从小到大
    //sort(a.begin(),a.end(), greater<int>());排序从大到小
    
    //lower_bound(x) : 寻找>=x的第一个元素的位置
    //upper_bound(x) : 寻找>x的第一个元素的位置
    /*vector<int> arr{0,1,1,1,8,9,9};
    int pos = upper_bound(arr.begin() + 2, arr.end(), 999) - arr.begin();
    if (pos == arr.size()) {
        cout << "no" << endl;
    }
    cout << pos << endl;*/

    //reverse(arr.begin(), arr.end());反转
    //reverse(arr.begin() + 2 , arr.begin() + 5);反转第三位到第六位
    /*for (auto &ele : arr)
        cout << ele << endl;*/

    //min(a,b);  三个数min(min(a,b),c); min({1,2,3,4,5});

    //unique消除数组的重复相邻元素，如果按顺序排列，则可以达到去重效果
     //去重后尾部产生一些无效数据，结合erase达到去重效果 
    /*vector<int> arr{1,2,1,4,5,4,4};
    sort(arr.begin(), arr.end());
    // 1 1 2 4 4 4 4
    // 1 2 4 5 * 
    arr.erase(unique(arr.begin(),arr.end()), arr.end());//去重
    for (auto ele : arr) 
        cout << ele << endl;*/
    
    //数学函数
    //所有函数均支持int long long float double 
    //绝对值     abs(a)
    //e的x次方   exp(a) e的a次方
    //ln x      log(a)  ln a
    //x的y次方   pow(2,3) 2的3次方 ; pow(2, 1.0/3) 2开三次方 
    //根号x      sqrt(a)
    //向上取整   ceil(a)
    //向下取整   floor(a)
    //四舍五入   round(a)

    //浮点误差
    //floor(1.0*a/b) --> a/b
    //ceil(1.0*a/b)  --> (a+b-1)/b
    //int sqrt(a)    --> 二分查找
    //pow(a,b)       --> 快速幂
    //log2(a)        --> __lg(不规范，计算二进制宽度)

    //最大公约数gcd 最小公倍数lcm
    //gcd(a,b);
    //lcm(a,b);

    //transform(tmp.begin(), tmp.end(), tmp.begin(), ::tolower);将所有字符转化为小写
    //s[i] =tolower(s[i]);
    //toupper()：将字符转换为大写
    
    //if(tmp.find("alan") != string::npos) ans++;  
    //if(tmp.find("alan") != -1)字符检查
}