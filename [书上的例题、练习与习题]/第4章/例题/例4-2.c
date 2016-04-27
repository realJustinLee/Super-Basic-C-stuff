#include <stdio.h>
int main(void){
    int n=0,bjg=0;
    double fs,zf=0;
    printf("Enter Grades: ");
    scanf("%lf",&fs);
    while (fs>=0){
        if (fs<60){
            bjg++;
        }
        zf=zf+fs;
        n++;
        scanf("%lf",&fs);
    }
    if (n!=0) {
        printf("Grade Average=%.2f"
                       "Number of failures %d", zf / n, bjg);
    }
    else{
        printf("Grade Average=0");
    }
    return 0;
}
