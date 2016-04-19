#include <stdio.h>
#include <math.h>
int main(void) {
    int a, b, c, d=1, i=1;
    scanf("%d", &a);
    printf("%d ", a);
    c = a;
    b = a * a;
    while (c >= 10) {
        i++;
        c = c / 10;
    }
    while (i>0) {
        d=d*10;
        i--;
    }
    if (a == b % d) {
        printf("yes,");
    }
    else {
        printf("no,");
    }
    printf("%d*%d=%d",a,a,b);
}
