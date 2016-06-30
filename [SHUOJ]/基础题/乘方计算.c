#include <stdio.h>
void power(signed long arr){
    signed long powe=arr;
    int i=0;
    while((powe<21483647)&&(i<4)) {
        powe=powe*arr;
        printf(", %lu",powe);
        i++;
    }
}
int main(void){
    signed long arr;
    int i=0;
    while(scanf("%ld",&arr)==1) {
        if (arr<=0){
            continue;
        }
        printf("Case %d: %lu",i+1,arr);
        power(arr);
        printf("\n");
        i++;
    }
    return 0;
}
