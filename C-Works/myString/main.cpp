#include <iostream>
#include"mystring.h"
using namespace std;

int main()
{
	mystring str1="hello", str2, str3;

	str1=str1;
	str2[0] = 'H';
	cout << "\"" << str1 << "\"" << endl;
	cout << "\"" << str2 << "\"" << endl;
	str2="world";
	str3=str1+mystring(",");
    cout << "\"" << str2 << "\"" << endl;
	cout << "\"" << str3<< "\"" << endl;
	str3+=str2;
	cout << "\"" << str3 << "\"" << endl;
    str3.up();
    cout << "\"" << str3<< "\"" << endl;
    str3.low();
    cout << "\"" << str3<< "\"" << endl;
    cout<<str3.find(str2)<<endl;
    mystring str4;
    int l;
    cin>>str4;
    l=str4.length();
    cout<<l<<" "<< "\"" << str4 << "\"" << endl;


	return 0;
}

