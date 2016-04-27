#include <stdio.h>
int main(void) {
    int u,d;
    char ch;
    printf("Enter Grade :");
    ch=getchar();
    switch(ch){
        case 'A':
            u=100;
            d=90;
            break;
        case 'B':
            u=89;
            d=80;
            break;
        case 'C':
            u=79;
            d=70;
            break;
        case 'D':
            u=69;
            d=60;
            break;
        case 'E':
            u=59;
            d=0;
            break;
        default:
            u=d=0;
            break;
    }
    printf("%d~%d",d,u);
    return 0;
}
