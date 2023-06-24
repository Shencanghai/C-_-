/*
	关键字：cin
	作用：从键盘获取输入。
	语法：cin >> 变量
*/
#include <iostream>
using namespace std;
int main()
{
	// 整型输入
	int a = 0;
	cout << "请输入一个整型数据：" << endl;
	cin >> a;
	cout << "a = " << a << endl;
	// 浮点型输入
	double d = 0;
	cout << "请输入一个浮点型数据数据：" << endl;
	cin >> d;
	cout << "d = " << d << endl;
	// 字符型输入
	char ch = 0;
	cout << "请输入一个字符型数据：" << endl;
	cin >> ch;
	cout << "ch = " << ch << endl;
	// 字符串型输入
	string str = "llla";
	cout << "请输入一个字符串型数据：" << endl;
	cin >> str;
	cout << "str = " << str << endl;
	// 布尔型输入
	bool flag = false;
	cout << "请输入一个布尔型数据：" << endl;
	cin >> flag;
	cout << "flag = " << flag << endl;
	
	system("pause");
	return 0;
}