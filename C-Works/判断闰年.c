#include <stdio.h>
int main(void) {
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    if (((year%4==0)&&(year%100!=0))||(year%400==0)){
        printf("Lunar year.");
    }
    else{
        printf("NO.");
    }
    return 0;
}
