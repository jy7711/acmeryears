#include<stdio.h>
int main()
{
	int n =0;
	scanf("%d" ,&n);
	int i=0;
	int a[n + 1];
	//初始化
	for(;i <= n;i++) {
	a[i]=0;
    }
	//输入
	i=0;
	for(;i <= n;i++) {
	int x;
	scanf("%d" ,&x);
	a[x]=1;
    }
	//输出排序后结果
	i=0;
	for(;i <= n;i++) {
		if(a[i] == 1) {
		printf("%d ",i);
	    }
	}
	return 0;
}
