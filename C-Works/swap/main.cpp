//本文件由于GBK编码

//Encoded with GBK

#include<iostream>
#include "declare.h"

using namespace std;

int main() {
    copyright();
    int x, y;
    cout << "请输入两个数字：" << endl;
    cin >> x >> y;
    cout << "x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "经过图灵机的处理后：" <<endl;
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}


