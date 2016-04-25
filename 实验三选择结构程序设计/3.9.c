#include <stdio.h>
int main(void){
    int i,n,g,a=0,b=0,c=0,d=0,e=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for (i = 1; i <= n ; i++) {
        printf("Enter grade %d:",i);
        scanf("%d",&g);
        if (g>=90){
            a++;
        }
        else if (g>=80){
            b++;
        }
        else if (g>=70){
            c++;
        }
        else if (g>=60){
            d++;
        }
        else{
            e++;
        }
    }
    printf("The number of A(90 ~100):%d\n"
                   "The number of B(80 ~89):%d\n"
                   "The number of C(70 ~79):%d\n"
                   "The number of D(60 ~69):%d\n"
                   "The number of E(0 ~59):%d",a,b,c,d,e);
    return 0;
}
