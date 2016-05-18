#include <stdio.h>
int main(void){
    int  i,n,m;
    char s[10];
    printf("Enter a string: ");
    i=0;
    while ((s[i]=getchar())!='\n'){
        i++;
    }
    s[i]='\0';
    for (n = 0,m=i-1; n <m ; n++,m--) {
        if(s[n]!=s[m]){
            break;
        }
    }
    if (n>m){
        printf("It is a palindrome.\n");
    }
    else{
        printf("It is not a palindrome.\n");
    }
    return 0;
}
