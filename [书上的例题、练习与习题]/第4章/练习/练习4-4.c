#include <stdio.h>
int main(void){
    int n=0;
    char ch;
    printf("Enter a number: ");
    do{                                      //охdo
        if (ch!='-'){
            n++;
        }
    }while ((ch=getchar())!='\n');           //тыеп╤о
    printf("%d",n);
    return 0;
}
