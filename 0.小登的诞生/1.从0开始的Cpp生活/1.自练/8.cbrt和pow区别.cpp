#include <bits/stdc++.h>
using namespace std;
int main()
{
	//cbrt和pow
	//cbrt适用范围只是开3次立方根
	//pow，则可以做n次方运算和开n次方根
	
	cbrt(8)    // 返回 2.0
	cbrt(27)   // 返回 3.0
	cbrt(-8)   // 返回 -2.0
	cbrt(0.125)// 返回 0.5 
	
	pow(x, 1.0/3.0)  // 计算 x 的立方根
	pow(8, 3)        // 计算 8*8*8 = 512
	pow(8, 1.0/3.0)  // 计算 8 的立方根 = 2.0
	pow(2, 4)        // 计算 2*2*2*2 = 16
	
	return 0;
}
