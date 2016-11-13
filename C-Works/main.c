#include <stdio.h>
#include <string.h>

int fun(char *str, char *substr) {
    int i, j, len1, len2, m = 0, n = 0;
    len1 = strlen(str);
    len2 = strlen(substr);
    if (len1 < len2)
        return 0;
    for (i = 0; i <= len1 - len2; i++) {
        m = i;
        for (j = 0; j < len2; j++) {
            if (str[m++] != substr[j])
                break;
            if (m >= i + len2)
                n++;
        }
    }
    return n;
}

int main() {

    return 0;
}