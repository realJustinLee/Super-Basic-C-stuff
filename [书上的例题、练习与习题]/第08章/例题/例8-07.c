#include <stdio.h>
int main(void){
    int i,a[10],*p;
    long sum=0;
    printf("Enter 10 integers: ");
    for (i = 0; i <10 ; i++) {
        scanf("%d",&a[i]);
    }
    for (i = 0; i <10 ; i++) {
        sum=sum+a[i];
    }
    printf("cacluated by array,sum=%ld\n",sum);
    sum=0;
    for (p = a; p <=a+9 ; p++) {
        sum=sum+*p;
    }
    printf("cacluated by pointer,sum=%ld\n",sum);
    return 0;
}
