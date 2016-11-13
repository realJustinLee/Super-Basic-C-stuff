#include <stdio.h>
int main(void){
    struct complex{
        int real,imag;
    }product,a,b;
    printf("Input a1,a2,b1,b2:");
    scanf("%d%d%d%d",&a.real,&a.imag,&b.real,&b.imag);
    product.real=a.real*b.real-a.imag*b.imag;
    product.imag=a.real*b.imag+a.imag*b.real;
    printf("(%d+%di)*(%d+%di)=%d+%di\n",a.real,a.imag,b.real,b.imag,product.real,product.imag);
    return 0;
}
