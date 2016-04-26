#include <stdio.h>
int main(void) {
    double n, fee;
    printf("Enter n:");
    scanf("%lf",&n);
    if (n <= 50) {
        fee = n * 0.53;
    }
    else {
        fee = (n-50)*0.05+n*0.53;
    }
    printf("%.2f",fee);
    return 0;
}
