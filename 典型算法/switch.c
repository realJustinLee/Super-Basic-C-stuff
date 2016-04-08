#include <stdio.h>
int main(void){
    int a=1,i=1;
    double p;
    printf("[1] apples\n"
                   "[2] pears\n"
                   "[3] oranges\n"
                   "[4] grapes\n"
                   "[0] exit\n");
    while(a!=0&&i<=5) {
        i++;
        printf("Enter choice: ");
        scanf("%d",&a);
        if (a==0)break;
        switch (a){
            case 1:p=3.0;break;
            case 2:p=2.5;break;
            case 3:p=4.0;break;
            case 4:p=3.5;break;
            default:p=0.0;break;
        }
        printf("price=%.2f\n",p);
    }
    printf("Thanks");
    return 0;
}