#include <stdio.h>
int main(void){
    int fahr,lower,upper;
    double celsius;
    printf("Enter lower: ");
    scanf("%d",&lower);
    printf("Enter upper: ");
    scanf("%d",&upper);
    printf("fahr  celsius\n");
    for (fahr = lower; fahr <= upper; fahr=fahr+2) {
        celsius=(5.0/9.0)*(fahr-32);
        printf("%d  %6.1f\n",fahr,celsius);
    }
    return 0;
}
