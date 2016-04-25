#include <stdio.h>
int main(void){
    int i,m;
    printf("输入m:");
    scanf("%d",&m);
    for (i = 2; i <= m/2 ; i++)
        if (m%i==0)
            break;
        if (i>m/2&&m!=1)
            printf("%d是素数",m);
        else
            printf("%d不是素数",m);
    return 0;
}