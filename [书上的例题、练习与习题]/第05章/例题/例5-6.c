#include <stdio.h>
float result_real,result_imag;
void complex_add(float real1,float imag1,float real2,float imag2){
    result_real=real1+real2;
    result_imag=imag1+imag2;
}
void complex_prod(float real1,float imag1,float real2,float imag2){
    result_real=real1*real2-imag1*imag2;
    result_imag=real1*imag2+real2*imag1;
}
int main(void){
    float real1,imag1,real2,imag2;
    printf("Enter 1st cmplex number(real and imaginary): ");
    scanf("%f%f",&real1,&imag1);
    printf("Enter 2nd cmplex number(real and imaginary): ");
    scanf("%f%f",&real2,&imag2);
    complex_add(real1,imag1,real2,imag2);
    printf("addition of complex is %f+%fi\n",result_real,result_imag);
    complex_prod(real1,imag1,real2,imag2);
    printf("product of complex is %f+%fi\n",result_real,result_imag);
    return 0;
}
