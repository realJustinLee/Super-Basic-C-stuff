#include <stdio.h>
#define MAX 100

struct contact{
    char name[MAX];
    double birth;
    char number[MAX];
}contact;

void main(){
    int n,i,j,old;
    printf("Input n:");
    scanf("%d",&n);
    struct contact men[n];
    struct contact temp;
    for (i = 0; i <n ; i++) {
        printf("Input the name,birthday,number of the %d friend:",i+1);
        scanf("%s%lf%s",men[i].name,&men[i].birth,men[i].number);
    }

    for (i = 0; i <n-1 ; i++) {
        old=i;
        for (j = i+1; j <n ; j++) {
            if (men[j].birth<men[old].birth){
                old=j;
            }
        }
        temp=men[i];
        men[i]=men[old];
        men[old]=temp;
    }

    for (i = 0; i < n; i++) {
        printf("%s %.0f %s\n",men[i].name,men[i].birth,men[i].number);
    }
}
