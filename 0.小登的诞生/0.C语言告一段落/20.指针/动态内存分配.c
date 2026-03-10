#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int number;
	int *a;
	int i;
	printf("请输入数量：");
	scanf("%d", & number); 
	//int a[number];
	
	//向malloc申请的空间的大小是以字节为单位 
	//返回的结果是void*，需要类型转换为自己需要的类型 
	a = (int*)malloc(number*sizeof(int));
	for (i = 0 ; i < number ; i++) {
		scanf("%d", &a[i]);
	}
	for (i = number - 1; i >= 0 ; i--) {
		printf("%d" , a[i]);
	}
	
	free(a);
	
	return 0;
}
