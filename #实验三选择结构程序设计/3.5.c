#include <stdio.h>
int main(void){
    int a=1,i=1;
    printf("[1] apples\n"
                   "[2] pears\n"
                   "[3] oranges\n"
                   "[4] grapes\n"
                   "[0] exit\n");
    while(a!=0&&i<=5) {
        i++;
        printf("Enter choice: ");
        scanf("%d",&a);
        if (a==1)
            printf("[1] apples price=3.0\n");
        if (a==2)
            printf("[2] pears price=2.5\n");
        if (a==3)
            printf("[3] oranges price=4.1\n");
        if (a==4)
            printf("[4] grapes price=10.2\n");
        if (a>=5)
            printf("other price=0.0\n");
    }
    printf("Thanks");
    return 0;
}