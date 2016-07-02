#include <stdio.h>
#include <string.h>
int main(void) {
    int i;
    char str[80], tmp[3];
    gets(str);
    for (i = 0; i < 3; i++) {
        tmp[i] = str[i];
    }
    strcpy(str, str + 3);
    strcat(str, tmp);
    puts(str);
    return 0;
}
