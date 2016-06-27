#include <stdio.h>
int cal(double a,char ch,double b,double c){
    double tmp=0;
    int flag;
    if (ch=='+'){
        tmp=a+b;
    }
    else if (ch=='-'){
        tmp=a-b;
    }
    else if (ch=='*'){
        tmp=a*b;
    }
    else if (ch=='/'){
        tmp=a/b;
    }
    flag=(c==tmp)?1:0;
    return flag;
}
int main(void){
    char ch;
    int i=0;
    double a,b,c;
    while(scanf("%lf %c %lf = %lf",&a,&ch,&b,&c)!=EOF){
        i++;
        printf("Case %d: ",i);
        if (cal(a,ch,b,c)){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
