#include <stdio.h>
int main()
{//t用于恢复a的值
//计算位数 
    int a,t;
    scanf("%d",&a);
    if(a == 0){
        printf("1\n0\n0");
        return 0;
    }
    t=a;
    int cnt = 0;
    for (a;a>=1;cnt++) {
        a/=10;
    }
    printf("%d\n",cnt);
    a=t; 
//分别输出每个整数    
    int b=1,c;
    while (cnt>1) {
        cnt--;
        b*=10;
    }
    do {
        c=a/b;
        printf("%d",c);
        if (b>9) {
            printf(" ");
        } 
        a%=b;
        b/=10;
    } while (b>0);
    printf("\n");
    a=t;
//逆序输出    
    int d,e = 0;
    while (a>0) {
        d=a%10;
        printf("%d",d);
        e=10*e+d;  //*e-->要对e做初始化 
        a/=10;
    }
    return 0;
}
