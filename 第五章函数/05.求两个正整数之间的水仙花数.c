#include <stdio.h>
int is(int number){
    int a,b,s=0;
    a=number;
    while (a!=0){
        b=a%10;
        a=a/10;
        s=s+b*b*b;
    }
    if (s==number){
        return 1;
    }
    return 0;
}
int main(void){
    int m,n,number;
    printf("Input m: ");
    scanf("%d",&m);
    printf("Input n: ");
    scanf("%d",&n);
    for (number = m; number <=n ; number++) {
        if (is(number)==1){
            printf("%d\n",number);
        }
    }
    return 0;
}

