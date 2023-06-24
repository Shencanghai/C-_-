/*
	字符型变量：
	作用：字符型变量用于显示单个字符。
	语法：char ch = 'a'。
	内存：字符型变量只占用1个字节的内存。
	注意：显示字符型变量时，只能用单引号将字符括起来，而且单引号里只能有一个字符，不能是字符串。

	字符串型变量：
	作用：字符串型变量用于显示一串字符。
	语法有两种风格：
		  1.C风格类型的字符串：	 char 变量名[] = "字符串值"
		  2.C++风格类型的字符串：string 变量名 = "字符串值"
	内存：字符串型变量占用的内存大小与字符串有关。
	注意：有可能需要包含一个头文件： #include <string>

	学习记录：
	1. 将字符型变量强制转换成整形 (int)ch 可以方便地查看字符型变量对应的ASCII编码。
	2. 需要记住的ASCII编码： a——97
							 A——65。
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch = 'a';
	cout << "字符型变量占用的内存大小为：" << sizeof(char) << "个字节" << endl;
	cout << "字符型变量ch对应的ASCII编码为：" << (int)ch << endl;

	char str1[] = "hello world";
	string str2 = "world hello";
	cout << "字符串型变量str1占用的内存大小为：" << sizeof(str1) << "个字节" << endl;
	cout << "字符串型变量str2占用的内存大小为：" << sizeof(str2) << "个字节" << endl;
	cout << "字符型变量str1对应的ASCII编码为：" << (int)str1 << endl;

	system("pause");
	return 0;
}