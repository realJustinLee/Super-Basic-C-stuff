#include <stdio.h>
int main(void){
    double n,i,zf=0,cj,jg=0;
    printf("Enter n: ");
    scanf("%lf",&n);
    for (i = 1;  i<=n ; i++) {
        printf("Enter grade #%.0f: ",i);
        scanf("%lf",&cj);
        zf=zf+cj;
        if (cj>=60){
            jg++;
        }
    }
    printf("Grade average=%.2f\n"
                   "Number of passes=%.0f\n",zf/n,jg);
    return 0;
}
