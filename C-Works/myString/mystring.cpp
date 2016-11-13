#include"mystring.h"
#include<cstring>

mystring::mystring(const char *s)
{
        if(s==NULL)
        {
            str=new char[1];
            str='\0';
        }
        else
        {
            int l=strlen(s);
            str=new char[l+1];
            strcpy(str,s);
        }
}
mystring::mystring(const char *s,int n)
{
    int i,l=strlen(s);
    if(l<n)
        n=l;
    if(n<0)
        n=0;
    str=new char[n+1];
    for(i=0;i<n;i++)
    {
        str[i]=s[i];
    }
    str[i]='\0';
}
mystring::mystring(int n,const char *s)
{
    int i,l=strlen(s);
    if(l<n)
        n=l;
    if(n<0)
        n=0;
    str=new char[n+1];
    for(i=0;i<n;i++)
    {
        str[i]=s[i];
    }
    str[i]='\0';
}
mystring::mystring(char c,int n)
{
    int i;
    if(n<0)
        n=0;
    for(i=0;i<n;i++)
    {
        str[i]=c;
    }
    str[i]='\0';
}
mystring::mystring(int n,char c)
{
    int i;
    if(n<0)
        n=0;
    for(i=0;i<n;i++)
    {
        str[i]=c;
    }
    str[i]='\0';
}
mystring::mystring(const mystring &other)
{
    str=new char[strlen(other.str)+1];
    strcpy(str,other.str);
}
mystring::~mystring()
{
    if(str!=NULL)
    delete[] str;
}
mystring & mystring::operator=(const mystring &other)
{

    if(&other==this)
        return *this;
        delete[] str;
        str=new char[strlen(other.str)+1];
        strcpy(str,other.str);
    return *this;
}
int mystring::length() const
{
    int i;
    for(i=0;str[i]!='\0';i++);
    return i;
}
void mystring::swap(mystring &other)
{
    char *temp=other.str;
    other.str=str;
    str=temp;
}
int mystring::find(const mystring &other)
{
   int i,j,m,n;
   m=strlen(str);
   n=strlen(other.str);
   if(m<n)
    return -1;
   for(i=0;i<=m-n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(str[i+j]!=other.str[j])
           {
               break;
           }
       }
       if(j==n)
        return i+1;

   }
   return -1;
}
int mystring::find(const char c)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
            return i+1;
    }
    return -1;
}
void mystring::up()
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-'a'+'A';
    }
}
void mystring::low()
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]-'A'+'a';
    }
}
char & mystring::operator[](int index)
{
	return str[index];
}

mystring operator+(const mystring &Str1, const mystring &Str2)
{
	mystring temp;
	temp.str = new char[strlen(Str1.str)+strlen(Str2.str)+1];

	strcpy(temp.str, Str1.str);
	strcat(temp.str, Str2.str);
	return temp;
}

mystring & mystring::operator+=(const mystring &Str)
{
	*this = *this + Str;
	return *this;
}

bool operator==(const mystring &Str1, const mystring &Str2)
{
	return strcmp(Str1.str, Str2.str)==0;
}

bool operator!=(const mystring &Str1, const mystring &Str2)
{
	return strcmp(Str1.str, Str2.str)!=0;
}

bool operator> (const mystring &Str1, const mystring &Str2)
{
	return strcmp(Str1.str, Str2.str) > 0;
}

bool operator>=(const mystring &Str1, const mystring &Str2)
{
	return strcmp(Str1.str, Str2.str) >= 0;
}

bool operator< (const mystring &Str1, const mystring &Str2)
{
	return strcmp(Str1.str, Str2.str) < 0;
}

bool operator<=(const mystring &Str1, const mystring &Str2)
{
	return strcmp(Str1.str, Str2.str) <= 0;
}

ostream & operator<<(ostream &out, const mystring &Str)
{
	out << Str.str;
	return out;
}

istream & operator>>(istream &in, mystring &Str)
{
	char str[1000];
	in >> str;
	Str = str;
	return in;
}



