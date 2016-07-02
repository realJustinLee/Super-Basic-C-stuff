#include <stdio.h>
#include <string.h>
int main(void) {
    //string
    int i;
    char sx[80], smin[80];
    scanf("%s", sx);
    strcpy(smin, sx);
    for (i = 1; i < 5; i++) {
        scanf("%s", sx);
        if (strcmp(sx, smin) < 0) {
            strcpy(smin, sx);
        }
    }
    printf("min is %s\n", smin);
    //num
    /*
    int i;
    int x, min;
    scanf("%d", &x);
    min = x;
    for (i = 1; i < 5; i++) {
        scanf("%d", &x);
        if (x < min) {
            min = x;
        }
    }
    printf("min is %d\n", min);
     */
    return 0;
}