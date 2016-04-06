#include <stdio.h>
#include <math.h>
int main(void){
    double a,b,c,s,area,p;
    printf("Enter 3 sides of the triangle: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    s=(a+b+c)/2;
    if ((a+b>c)&&(b+c>a)&&(c+c>b)){
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        p=a+b+c;
        printf("area=%.2f; perimeter=%.2f",area,p);
    }
    else
        printf("These sides do not correspond to a valid triangle");
    return 0;
}
