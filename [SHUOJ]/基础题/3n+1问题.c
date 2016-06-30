#include <stdio.h>
int cal(int str){
    int n=0;
    if (str>0){
        while (str-1){
            if(str%2){
                str=3*str+1;
                n++;
            }
            else{
                str=str/2;
                n++;
            }
        }
    }
    else{
        n=-1;
    }
    return n;
}
int main(void){
    int i=0,str;
    while(scanf("%d",&str)!=EOF){
        printf("Case %d: %d, %d\n",++i,str,cal(str));
    }
    return 0;
}
