#include <stdio.h>
int main()
{
	int age;
	const AGE=35;
    printf("请输入你的年龄：");
	scanf("%d",&age);
	printf("你的年龄是%d岁。\n",age);
	if (age<=35) {
		printf("年轻真好，"); 
	} 
	printf("老了也行。\n"); 
	return 0;
 } 
