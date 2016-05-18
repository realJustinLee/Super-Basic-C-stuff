#include <stdio.h>
int main(void){
    int n,b,i=0,j;
    char str[80];
    char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter b: ");
    scanf("%d",&b);
    while (n){
        str[i]=hex[n%b];
        n=n/b;
        i++;
    }
    for (j=i-1; j >=0 ; j--) {
        putchar(str[j]);
    }
    return 0;
}