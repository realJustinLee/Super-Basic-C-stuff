#include <stdio.h>
#define MAX 100
typedef struct lib{
    char name[MAX];
    double price;
}lib;
void main(){
    int n,i,max=0,min=0;
    double p;
    printf("Input n:");
    scanf("%d",&n);
    lib books[n];
    for (i = 0; i <n ; i++) {
        printf("Input the name,price of the %d book:",i+1);
        scanf("%s%lf",books[i].name,&p);
        books[i].price=p;
    }
    for (i = 0; i <n ; i++) {
        if (books[i].price>books[max].price){
            max=i;
        }
        if (books[i].price<books[min].price){
            min=i;
        }
    }
    printf("The book with the max price:%s,%.1f\n",books[max].name,books[max].price);
    printf("The book with the min price:%s,%.1f\n",books[min].name,books[min].price);
}
