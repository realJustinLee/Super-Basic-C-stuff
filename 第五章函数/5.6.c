#include <stdio.h>
int countdigit(int a,int n){
    int b;
    while (a!=0){
        b=a%10;
        a=a/10;
        if (b==2){
            n++;
        }
    }
    return n;
}
int main(void){
    int a,n=0;
    printf("Enter an integer: ");
    scanf("%d",&a);
    printf("Number of digit 2: %d",countdigit(a,n));
    return 0;
}