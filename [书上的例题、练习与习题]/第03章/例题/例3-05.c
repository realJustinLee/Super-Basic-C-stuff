#include <stdio.h>
int main(void) {
    double value1,value2;
    char op;
    printf("Type in a expression: ");
    scanf("%lf%c%lf",&value1,&op,&value2);
    if (op=='+'){
        printf("=%.2f\n",value1+value2);
    }
    if (op=='-'){
        printf("=%.2f\n",value1-value2);
    }
    if (op=='*'){
        printf("=%.2f\n",value1*value2);
    }
    if (op=='/'){
        printf("=%.2f\n",value1/value2);
    }
    return 0;
}
