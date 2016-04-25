#include <stdio.h>
int main(void){
    int num1,num2;
    printf("Enter num1,num2: ");
    scanf("%d%d",&num1,&num2);
    printf("%d+%d=%d\n"
                   "%d-%d=%d\n"
                   "%d*%d=%d\n"
                   "%d%%%d=%d\n"
                   "%d/%d=%.2f",num1,num2,num1+num2,num1,num2,num1-num2,num1,num2,num1*num2,num1,num2,num1%num2,num1,num2,(1.0*num1)/(1.0*num2));
    return 0;
}
