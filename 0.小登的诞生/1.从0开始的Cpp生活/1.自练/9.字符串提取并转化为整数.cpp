#include <iostream>
#include <string>
using namespace std;

void ac() {
    string a;
    cin >> a;
    
    // 验证输入长度
    if (a.length() < 10) {
        cerr << "错误：输入字符串长度不足";
        return;
    }

    // 提取子串并转换为整数
    int month = stoi(a.substr(5, 2));  // 索引5开始取2字符
    int day = stoi(a.substr(8, 2));    // 索引8开始取2字符

    // 数值比较逻辑
    cout << (month < 10 || (month = 10 && day < 29) ? "No, It's not too late." : "QAQ");
}

int main() {
    ac();
}

