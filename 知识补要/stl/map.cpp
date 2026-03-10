#include <bits/stdc++.h>
using namespace std;
int main()
{
    //map映射
    //map<string, int>
   /*map<int , int> mp;
    mp[1] = 1;
    mp[2] = 3;*/
    
    //cout << mp[2] << endl;

    //mp.erase(2);
    //cout << mp.count(2) << endl;
    //cout << mp.size() << endl;
    //mp.clear();
    //cout << mp.empty() << endl;

    /*if (mp.find(2) != mp.end()) {
        cout << "yes" << endl;
    }
    else cout << "no" << endl;*/
    
    map<int , int> mp;
    mp[2] = 1;
    mp[1] = 3;
    mp[0] = 4;
    mp[99999] = 66666;
    mp[3] = 3;
    
   /* for (map<int, int>::iterator it = mp.begin(); it!=mp.end(); it++ )
    {
        cout << it -> first << ' ' << it -> second << endl;
    }
    与下面等价*/
    for (auto &pr : mp) {
        cout << pr.first << " " << pr.second << endl;
    }
    /*map<string , int> mp;
    vector<string> vec;
    vec.push_back("awa");
    vec.push_back("awa");
    vec.push_back("awa");
    vec.push_back("awa");
    vec.push_back("bwb");
    vec.push_back("bwb");

    for (int i = 0; i < vec.size(); i++) {
        mp[vec[i]]++;
    }

    for (auto &pr : mp) 
    cout << pr.first << " " << pr.second << endl;

    mp[0];*/
    //访问给初值 mp[0] = 0
}