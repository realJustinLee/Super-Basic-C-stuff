#include <stdio.h>
int main(void){
    int yournumber,mynumber=38;
    printf("Enter your number: ");
    scanf("%d",&yournumber);
    if (mynumber==yournumber){
        printf("Ok! You are right!");
    }
    else if (yournumber>mynumber){
        printf("Sorry, Your number is bigger than mine!");
    }
    else{
        printf("Sorry, Your number is smaller than mine!");
    }
    return 0;
}
