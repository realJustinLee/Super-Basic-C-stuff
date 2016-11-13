#ifndef MYSTRING_H_INCLUDED
#define MYSTRING_H_INCLUDED
#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

class mystring
{
public:
    mystring(const char *s=NULL) ;                 //构造函数
    mystring(const char *s,int n);
    mystring(int n,const char *s);
    mystring(char c,int n);
    mystring(int n,char c);
    mystring(const mystring &other);               //拷贝构造函数
    virtual ~mystring();                           //析构函数
    mystring & operator=(const mystring &other);   //复制构造函数

    int length() const;                      //统计字符串长度
    void swap(mystring &other);              //交换两个字符串
    int find(const mystring &other) ;        //找到某个字符串中子串第一次出现的位置
    int find(const char c);                 //找到某个字符串中某个字符第一次出现的位置
    void up();                             //对字符串中的字母大写化
    void low();                            //对字符串中的字母小写化
     char & operator[](int index);					// 方括号（下标）运算符。引用返回可作左值、右值
	friend mystring operator+(const mystring &Str1 ,const mystring &Str2); // 友元函数，字符串拼接
	mystring & operator+=(const mystring &Str);			// 字符串拼接及赋值
    // 重载关系运算
	friend bool operator==(const mystring &Str1, const mystring &Str2);
	friend bool operator!=(const mystring &Str1, const mystring &Str2);
	friend bool operator> (const mystring &Str1, const mystring &Str2);
	friend bool operator>=(const mystring &Str1, const mystring &Str2);
	friend bool operator< (const mystring &Str1, const mystring &Str2);
	friend bool operator<=(const mystring &Str1, const mystring &Str2);
    // 重载 I/O 流运算符
	friend ostream & operator<<(ostream &out, const mystring &Str);
	friend istream & operator>>(istream &in, mystring &Str);

private:
    char *str;
};
#endif // MYSTRING_H_INCLUDED
