/*
	作用：布尔类型的变量用于代表true(1)或false(0)。
	语法：bool 变量名 = true或非零值/false或0 ,输出分别为1/0 。
	内存：布尔类型的变量只占一个字节的内存。

	学习记录：
	1.如果将零赋给 bool 类型的变量，会被隐式转换为 false；
	  如果将非零值赋给 bool 类型的变量，会被隐式转换为 true。
*/
#include <iostream>
using namespace std;
int main()
{
	bool flag = true;
	cout << flag << endl;
	cout << "bool类型的变量占用的内存大小为：" << sizeof(flag) << "个字节" << endl;
	flag = false;
	cout << flag << endl;
	cout << "bool类型的变量占用的内存大小为：" << sizeof(flag) << "个字节" << endl;
	flag = 0;
	cout << "falg = " << flag << endl;
	flag = 156.2;
	cout << "falg = " << flag << endl;
	system("pause");
	return 0;
}
