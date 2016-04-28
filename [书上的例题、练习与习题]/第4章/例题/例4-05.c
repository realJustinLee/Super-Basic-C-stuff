#include <stdio.h>
int main(void){
    int i,yournumber,mynumber=38;
    for (i = 1; i <=5 ; i++) {
        printf("Enter your number: ");
        scanf("%d",&yournumber);
        if (mynumber==yournumber){
            printf("Ok! You are right!\n");
            break;
        }
        else if (yournumber>mynumber){
            printf("Sorry, Your number is bigger than mine!\n");
        }
        else{
            printf("Sorry, Your number is smaller than mine!\n");
        }
    }
    printf("Game Over.");
    return 0;
}
