#include <stdio.h>
int main(void){
    int reverse(int number);
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d",reverse(n));
    return 0;
}

int reverse(int number){
    int rev=0;
    while (number!=0){
        rev=10*rev+number%10;
        number=number/10;
    }
    return rev;
}
