//”…GBK±‡¬Î

//Encoded with GBK

#include <stdio.h>
#include <string.h>

void sort2_2(char *str[]) {
    int m, n, i;
    char *temp;
    for (m = 0; m < 12; m++) {
        for (n = 0; n < 11; n++) {
            if (strlen(str[n]) > strlen(str[n + 1])) {
                temp = str[n + 1];
                str[n + 1] = str[n];
                str[n] = temp;
            }
        }
    }
    for (m = 0; m < 12; m++) {
        for (n = 0; n < 11; n++) {
            if (strlen(str[n]) == strlen(str[n + 1])) {
                i = 0;
                while (*(str[n + 1] + i) != '\0') {
                    if (*(str[n] + i) < *(str[n + 1] + i)) {
                        break;
                    }
                    if (*(str[n] + i) > *(str[n + 1] + i)) {
                        temp = str[n + 1];
                        str[n + 1] = str[n];
                        str[n] = temp;
                    }
                    i++;
                }
            }
        }
    }
}
