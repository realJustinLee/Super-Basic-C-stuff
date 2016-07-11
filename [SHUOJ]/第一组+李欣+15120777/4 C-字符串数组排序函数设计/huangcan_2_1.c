//”…GBK±‡¬Î

//Encoded with GBK

#include<string.h>

void sort2_1(char *str[], int n) {
    char *temp;
    int i, j, flag;
    for (i = 0; i < n - 1; i++) {
        flag = 1;
        for (j = 0; j < n - 1 - i; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag) {
            return;
        }
    }
}
