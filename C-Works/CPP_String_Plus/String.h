#ifndef CPP_STRING_PLUS_STRING_H
#define CPP_STRING_PLUS_STRING_H

#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
    String(const char *s = "");

    String(const String &Str, int pos, int n);

    String(const char *s, int n);

    String(int n, char c);

    String(const String &Str);

    String &operator=(const String &Str);

    virtual ~String();

    String &insert(int p0, const char *s);

    String substr(int pos, int n) const;

    int find(const String &Str) const;

    int length() const;

    const char *c_str();

    void swap(String &Str);

    char &operator[](int index);

    friend String operator+(const String &Str1, const String &Str2);

    String &operator+=(const String &Str);

    friend bool operator==(const String Str1, const String Str2);

    friend bool operator!=(const String Str1, const String Str2);

    friend bool operator>(const String Str1, const String Str2);

    friend bool operator>=(const String Str1, const String Str2);

    friend bool operator<(const String Str1, const String Str2);

    friend bool operator<=(const String Str1, const String Str2);

    friend ostream &operator<<(ostream &out, const String &Str);

    friend istream &operator<<(istream &in, String &Str);

    friend istream &getline(istream &in, String &Str, int num, char delim = '\n');

    String &trim();

private:
    char *str;
};


#endif //CPP_STRING_PLUS_STRING_H
