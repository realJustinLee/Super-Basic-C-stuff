#include <stdio.h>
int main(void){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d->%o(OCT)->%x(HEX)",n,n,n);
    return 0;
}
