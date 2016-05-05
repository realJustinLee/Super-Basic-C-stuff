#include <stdio.h>
void py(int n){
    int i,j;
    for (i = 1; i <=n ; i++) {
        for (j = 1; j <=n-i ; j++) {
            printf(" ");
        }
        for (j = 1; j <=i ; j++) {
            printf("%d ",i);
        }
        putchar('\n');
    }
}
int main(void){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    py(n);
    return 0;
}
