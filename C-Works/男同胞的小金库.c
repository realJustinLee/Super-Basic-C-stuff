#include <stdio.h>
float cash;
int main(void){
    int choice;
    float value;
    void income(float number),expend(float number);
    cash=0;
    printf("Enter operate choice(0--end,1--income,2--expend): ");
    scanf("%d",&choice);
    while (choice!=0){
        if(choice==1||choice==2){
            printf("Enter cash value: ");
            scanf("%f",&value);
            if(choice==1){
                income(value);
            }
            else{
                expend(value);
            }
            printf("current cash:%.2f\n",cash);
        }
        printf("Enter operate choice(0--end,1--income,2--expend): ");
        scanf("%d",&choice);
    }
    return 0;
}
void income(float number){
    cash=cash+number;
}
void expend(float number){
    cash=cash-number;
}
