#include <bits/stdc++.h>
using namespace std;
int main()
{
  /* //vector 二维数组
    vector<vector<int>> a(5, vector<int> (6, 10)); //5行6列初值为10
    vector<vector<vector<int>>> b(5, vector<vector<int>> (6, vector<int> (4)));
    int c[5][6][4]; //c b等价
*/
    //尾接尾删
    vector<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);

    d.resize(5);//重新定义数组大小，多余的会删掉

    //创建一个与a相同的b数组
    vector<int> a(5,0);
    vector<int> b(a);
    vector<int> c(a.begin(),a.end());

    for(int i = 0;i < d.size();i ++){
        cout << d[i] << " ";
    }
    // for (auto ele : d)
    // cout << ele << endl;

    /*cout << d.size() << endl ;
    cout << d.empty() << endl;

   /*d.pop_back();

    d.clear();

    d.pop_back();
    for (auto &ele : d)
        cout << ele << endl;*/


    //长度确定直接构造函数指定长度， 
}