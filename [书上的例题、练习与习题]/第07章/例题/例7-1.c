#include <stdio.h>
int main(void){
    int n1,n2,i,response;
    printf("Enter n1,n2: ");
    scanf("%d%d",&n1,&n2);
    int count[n1+1];
    for (i = 0; i <=n1 ; i++) {
        count[i]=0;
    }
    for (i = 1; i <=n2; i++) {
        printf("Input your response: ");
        scanf("%d",&response);
        if (response<1||response>n1){
            printf("%d is an illegal response.\n",response);
        }
        else{
            count[response]++;
        }
    }
    printf("Result:\n");
    for (i = 1; i <=8 ; i++) {
        printf("%d  %d\n",i,count[i]);
    }
    return 0;
}