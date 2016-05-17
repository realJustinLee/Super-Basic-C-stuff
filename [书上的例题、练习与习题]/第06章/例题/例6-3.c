#include <stdio.h>
int main(void){
    char ch='w';
    int a=2,b=0,c=0;
    float x=3.0;
    printf("%d %d %d %d %d %d %d",a&&b,a||b&&c,!a&&b,1,!x==2,!x==2,ch||b);
    return 0;
}