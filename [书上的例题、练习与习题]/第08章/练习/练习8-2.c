#include <stdio.h>
void sum_diff(float op1,float op2,float *psum,float *pdiff){
    *psum=op1+op2;
    *pdiff=op1-op2;
}
int main(void){
    float op1,op2,sum,diff;
    printf("Enter op1,op2: ");
    scanf("%f%f",&op1,&op2);
    sum_diff(op1,op2,&sum,&diff);
    printf("%f %f",sum,diff);
    return 0;
}
