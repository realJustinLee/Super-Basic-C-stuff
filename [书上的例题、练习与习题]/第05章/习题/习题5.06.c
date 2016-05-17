#include <stdio.h>
int main(void){
    int countdigit(int number,int digit);
    int number,digit;
    printf("Enter number,digit: ");
    scanf("%d%d",&number,&digit);
    printf("%d of %d are in the %d.",countdigit(number,digit),digit,number);
    return 0;
}

int countdigit(int number,int digit){
    int count=0;
    while (number>0){
        if (number%10==digit){
            count++;
        }
        number=number/10;
    }
    return count;
}
