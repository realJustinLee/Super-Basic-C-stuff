#include <stdio.h>
int main(void) {
    double n,t,fee;
    printf("Enter n,t :");
    scanf("%lf%lf",&n,&t);
    n=n+t/5.0;
    if (n<=3){
        fee=10;
    }
    else if (n<=10){
        fee=(n-3)*2+10;
    }
    else{
        fee=(n-10)*3+24;
    }
    if (fee-(int)fee>=0.5){
        fee=(int)fee+1;
    }
    else{
        fee=(int)fee;
    }
    printf("%.0f",fee);
    return 0;
}
