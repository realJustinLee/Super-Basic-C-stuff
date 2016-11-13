//”…GBK±‡¬Î

//Encoded with GBK

#include <string.h>

void sort1_1(char (*str)[8], int n) {
    char ct[8];
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                strcpy(ct, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], ct);
            }
        }
    }
}
