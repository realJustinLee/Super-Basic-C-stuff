//由GBK编码

//Encoded with GBK

_CRTIMP int __cdecl    scanf (const char*, ...);            //2.1 形式参数为 格式控制字符串和变量地址    返回值为输入的数据项数，遇文件结束则返回EOF

_CRTIMP int __cdecl    printf (const char*, ...);               //形式参数为 格式控制字符串和变量        返回值为输出的字符数（包括回车空格等）

_CRTIMP char* __cdecl    gets (char*);                        //形式参数为 字符串指针                  返回值为与参数相同的指针，错误则返回空指针

_CRTIMP int __cdecl    puts (const char*);                   //2.1形式参数为 常量字符串指针              返回值为0，错误则返回-1

//scanf与gets区别：scanf不能接受空格，而gets可以；gets的输入会无限读取，一旦溢出会似苹刀颜皇，正式程序中不应使用

_CRTIMP int __cdecl    atoi    (const char*);                //2.2形式参数为 常量字符串指针              返回值为字符串转换后的整型数字，错误返回0

_CRTIMP long __cdecl     atol    (const char*);               //形式参数为 常量字符串指针              返回值为字符串转换后的长整型数字，错误返回0

_CRTIMP double __cdecl    atof    (const char*);               //形式参数为 常量字符串指针              返回值为字符串转换后的双精度浮点型整型数字，错误返回0

_CRTIMP int __cdecl    sscanf (const char*, const char*, ...);  //形式参数为 需要输入的固定字符串和格式控制字符串和字符数组名    返回值为参数数目，错误返回-1

_CRTIMP int __cdecl    sprintf (char*, const char*, ...);    //2.2形式参数为 目标字符串指针，输出内容和格式控制字符串，变量名  返回值为输出的字符串长度

_CRTIMP _size_t __cdecl    strlen (const char*);             //2.3形式参数为 常量字符串指针              返回值为字符串的长度，整型

_CRTIMP char* __cdecl    strcpy (char*, const char*);         //形式参数为 目标字符串指针和要复制的常量字符串指针  返回值为指向目标字符串的指针

_CRTIMP char* __cdecl    strncpy (char*, const char*, size_t);//形式参数为 字符串指针和要复制的常量字符串指针  返回值为指向目标字符串的指针；将前n个字符复制到目标字符串中

_CRTIMP char* __cdecl    strcat (char*, const char*);         //形式参数为 字符串指针和常量字符串指针  返回值为指向前者的指针，将后者连接在前者之后

_CRTIMP char* __cdecl    strncat (char*, const char*, size_t);//形式参数为 字符串指针和常量字符串指针  返回值为指向前者的指针，将后者的前n个字符连接在前者之后，数字为后者的前n个字符

_CRTIMP int __cdecl    strcmp (const char*, const char*);       //形式参数为 常量字符串指针              返回值为：比较两者的ASCII码当s1<s2时，返回为负数；当s1=s2时，返回值= 0；当s1>s2时，返回正数。

_CRTIMP char* __cdecl    _strupr (char*);                     //形式参数为 字符串指针                  返回值为指向原字符串的指针，将小写转为大写

_CRTIMP char* __cdecl    _strlwr (char*);                     //形式参数为 字符串指针                  返回值为指向原字符串的指针，将大写转为小写

//由GBK编码

//Encoded with GBK
