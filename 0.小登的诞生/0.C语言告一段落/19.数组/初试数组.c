#include <stdio.h>
int main()
{
	//计算输入数字的平均数，读到 -1 停止 
	int x;
	double sum = 0;
	int cnt = 0;
	scanf("%d", &x);
	while (x != -1) {
		sum += x;
		cnt ++;
		scanf("%d", &x);
	}
	if (cnt > 0) {
		//保留两位小数 
		printf("%.2f\n", sum / cnt);
	}
	return 0;
}
