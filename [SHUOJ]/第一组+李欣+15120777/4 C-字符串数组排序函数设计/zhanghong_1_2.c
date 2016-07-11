//”…GBK±‡¬Î

//Encoded with GBK

#include <stdio.h>
#include <string.h>

void sort1_2(char (*a)[8], int n) {
    int i, j;
    char ct[8];
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strlen(a[j]) > strlen(a[j + 1])) {
                strcpy(ct, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], ct);
            }
            else if (strlen(a[j]) == strlen(a[j + 1])) {
                if (strcmp(a[j], a[j + 1]) > 0) {
                    strcpy(ct, a[j]);
                    strcpy(a[j], a[j + 1]);
                    strcpy(a[j + 1], ct);
                }
            }
        }
    }
}
