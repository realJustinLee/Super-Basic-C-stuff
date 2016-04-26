#include <stdio.h>
int main(void){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    if (n%2==0){
        printf("The number is even.");
    }
    else{
        printf("The number is odd.");
    }
    return 0;
}
