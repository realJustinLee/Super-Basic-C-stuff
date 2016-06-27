#include <stdio.h>
int main(){
    char str1[80],str2[80];
    /*
     * WAY #1
    scanf("%s",str1);
    printf("%s",str1);
    printf("%s","Hello");
    */
    /*WAY #2(Recommended)*/
    gets(str2);
    puts(str2);
    puts("Hello");
    return 0;
}
