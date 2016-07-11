//由GBK编码

//Encoded with GBK

#ifndef DECLARE_H
#define DECLARE_H

// 函数 StrCpy，StrNCpy, StrCmp，StrLen，StrCat, StrNCat, StrUpr, StrLwr的定义

// StrCpy
void StrCpy(char *str1, const char *str2);

// StrNCpy
void StrNCpy(char *str1, const char *str2, int n);

// StrLen
int StrLen(char *str);

// StrCmp
int StrCmp(char *str1, char *str2);

//StrCat
char *StrCat(char *dest, const char *src);

//StrNCat
void StrNCat(char *str1, const char *str2, int n);

//StrUpr
char *StrUpr(char *str);

//StrLwr
char *StrLwr(char *str);

//AtoI
int AtoI(char *str);

#endif
