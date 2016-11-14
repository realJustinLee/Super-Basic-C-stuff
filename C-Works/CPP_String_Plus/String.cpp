#include "String.h"

String::String(const char *s) {
    str = new char[strlen(s) + 1];
    strcpy(str, s);
}

String::String(const String &Str, int pos, int n) {
    int i, m;
    m = strlen(Str.str);
    if (pos > m) {
        str = new char[1];
        str[0] = '\0';
        return;
    }
    if (m - pos < n) {
        n = m - pos;
    }
    if (n < 0) {
        n = 0;
    }
    str = new char[n + 1];
    for (i = 0; i < n; ++i) {
        str[i] = Str.str[pos + i];
    }
    str[i] = '\0';
}

String::String(const char *s, int n) {
    int i, m = strlen(s);
    if (m < n) {
        n = m;
    }
    if (n < 0) {
        n = 0;
    }
    str = new char[n + 1];
    for (i = 0; i < n; ++i) {
        str[i] = s[i];
    }
    str[i] = '\0';
}

String::String(int n, char c) {
    int i;
    if (n <= 0) {
        n = 0;
    }
    str = new char[n + 1];
    for (i = 0; i < n; ++i) {
        str[i] = c;
    }
    str[i] = '\0';
}

String::String(const String &Str) {
    str = new char[strlen(Str.str)];
    strcpy(str, Str.str);
}

String &String::operator=(const String &Str) {
    if (&Str == this) {
        return *this;
    }
    delete[](str);
    str = new char[strlen(Str.str)];
    strcpy(str, Str.str);
    return *this;
}

String::~String() {
    if (str != NULL) {
        delete[](str);
    }
}

String &String::insert(int p0, const char *s) {
    int n = strlen(str);
    if (p0 > n) {
        p0 = n;
    }
    char *p = new char[strlen(str) + strlen(s) + 1];
    strncpy(p, str, p0);
    p[p0] = '\0';
    strcat(p, s);
    strcat(p, str + p0);
    delete[](str);
    str = p;
    return *this;
}

String String::substr(int pos, int n) const {
    String temp(*this, pos, n);
    return temp;
}

int String::find(const String &Str) const {
    int i, j, m, n, flag;
    m = strlen(Str.str);
    n = strlen(str);
    if (m > n) {
        return -1;
    }
    for (i = 0; i < n - m; ++i) {
        flag = 1;
        for (j = 0; j < m; ++j) {
            if (str[i + j] != Str.str[j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            return 1;
        }
    }
    return -1;
}

int String::length() const {
    return strlen(str);
}

const char *String::c_str() {
    return str;
}

void String::swap(String &Str) {
    char *temp = Str.str;
    Str.str = str;
    str = temp;
}

char &String::operator[](int index) {
    return str[index];
}

String operator+(const String &Str1, const String &Str2) {
    String temp;
    temp.str = new char[strlen(Str1.str) + strlen(Str2.str)];
    strcpy(temp.str, Str1.str);
    strcat(temp.str, Str2.str);
    return temp;
}

String &String::operator+=(const String &Str) {
    *this = *this + Str;
    return *this;
}

bool operator==(const String Str1, const String Str2) {
    return strcmp(Str1.str, Str2.str) == 0;
}

bool operator!=(const String Str1, const String Str2) {
    return strcmp(Str1.str, Str2.str) != 0;
}

bool operator>(const String Str1, const String Str2) {
    return strcmp(Str1.str, Str2.str) > 0;
}

bool operator>=(const String Str1, const String Str2) {
    return strcmp(Str1.str, Str2.str) >= 0;
}

bool operator<(const String Str1, const String Str2) {
    return strcmp(Str1.str, Str2.str) < 0;
}

bool operator<=(const String Str1, const String Str2) {
    return strcmp(Str1.str, Str2.str) <= 0;
}

ostream &operator<<(ostream &out, const String &Str) {
    out << Str.str;
    return out;
}

istream &operator<<(istream &in, String &Str) {
    char str[1000];
    in >> str;
    Str = str;
    return in;
}

istream &getline(istream &in, String &Str, int num, char delim) {
    if (num <= 0) {
        return in;
    }
    if (Str.str != NULL) {
        delete[](Str.str);
    }
    Str.str = new char[num + 1];
    in.getline(Str.str, num, delim);
    return in;
}

String &String::trim() {
    int i, j = strlen(str);
    if (j == 0) {
        return *this;
    }
    for (j--; j > 0 && (str[j] == ' ' || str[j] == '\t'); j--) { ;
    }
    str[j + 1] = '\0';
    for (i = 0; str[i] == ' ' || str[i] == '\t'; ++i) { ;
    }
    if (i > j) {
        delete[](str);
        str = new char[1];
        str[0] = '\0';
    } else {
        char *temp = new char[j - i + 2];
        strcpy(temp, str + i);
        delete[](str);
        str = temp;
    }
    return *this;
}