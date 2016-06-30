#include <stdio.h>
int tgs(int a){
    int flag=1,tmp;
    tmp=a*a;
    while (a){
        if (a%10!=tmp%10){
            flag=0;
            break;
        }
        a=a/10;
        tmp=tmp/10;
    }
    return flag;
}
int main(void){
    int i=0,a;
    while (scanf("%d",&a)==1){
        printf("Case %d: %d, %s\n",++i,a,(tgs(a)?"Yes":"No"));
    }
    return 0;
}
