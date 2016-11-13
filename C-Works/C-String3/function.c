//由GBK编码

//Encoded with GBK

// 函数 StrCpy，StrNCpy, StrLen，StrCmp，StrCat, StrNCat, StrUpr, StrLwr, AtoI的定义

// StrCpy
void StrCpy(char *str1,const char *str2) {
    while ((*str1++ = *str2++)) { ;
    }
}

// StrNCpy
void StrNCpy(char *str1, const char *str2, int n) {
    while (n) {
        *str1++ = *str2++;
        n--;
    }
}


//StrLen
int StrLen(char *str) {
    int len = 0;
    while (str[len] != 0) {
        len++;
    }
    return len;
}

// StrCmp
int StrCmp(char *str1, char *str2) {
    int l = 0, i, sum = 0;
    l = (StrLen(str1) > StrLen(str2)) ? StrLen(str1) : StrLen(str2);
    for (i = 0; i < l; i++) {
        sum = sum + *str1 - *str2;
    }
    return sum;
}


// StrCat
char *StrCat(char *dest, const char *src) {
    char *tmp = dest;

    while (*dest)
        dest++;
    while ((*dest++ = *src++) != '\0');

    return tmp;
}

//StrNCat
void StrNCat(char *str1, const char *str2, int n) {
    while (*str1 != 0) {
        str1++;
    }
    while (n && *str2) {
        *str1++ = *str2++;
        n--;
    }
    *str1 = 0;
}

//StrUpr
char *StrUpr(char *str) {
    char *strp = str;
    while (*strp != 0) {
        if ((*strp >= 'a') && (*strp <= 'z')) {
            *strp -= 0x20;
        }
        strp++;
    }
    return str;
}

//StrLwr
char *StrLwr(char *str) {
    char *strp = str;
    while (*strp != 0) {
        if ((*strp >= 'A') && (*strp <= 'Z')) {
            *strp += 0x20;
        }
        strp++;
    }
    return str;
}

//AtoI
int AtoI(char *str){
    int n=0;
    while ((*str >= '0') && (*str <= '9')) {
        n=10*n+*str-'0';
        str++;
    }
    return n;
}
