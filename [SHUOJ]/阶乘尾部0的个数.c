#include <stdio.h>
int cal(int str){
    int i,t,a=0,b=0,n=0;
    for (i = 2; i <=str ; i++) {
        t=i;
        while (t%2==0) {
            if(t%2==0){
                a++;
            }
            t=t/2;
        }
        t=i;
        while(t%5==0) {
            if(t%5==0){
                b++;
            }
            t=t/5;
        }
    }
    n=(a<b)?a:b;
    return n;
}
int main(void){
    int i=0,str;
    while(scanf("%d",&str)!=-1){
        i++;
        printf("Case %d: %d, %d\n",i,str,cal(str));
    }
    return 0;
}
