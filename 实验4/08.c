#include <stdio.h>
int main(void){
    int n=10;
    do{
        n++;
    }while ((n%5!=1)||(n%6!=5)||(n%7!=4)||(n%11!=10));
    printf("%d",n);
    return 0;
}