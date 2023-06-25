/*
	作用：用于条件判断，同时执行。
	语法：表达式1 ? 表达式2 : 表达式3
	解释：如果表达式1的值为真(1)，则执行表达式2，并返回表达式2的结果；
		  如果表达式1的值为假(0)，则执行表达式3，并返回表达式3的结果。

	案例：有三个变量abc，将a和b中较大的那一个赋值给c。

	学习记录：
	1.可以直接给三目运算符返回的结果继续赋值。

*/
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = a > b ? a : b;
	cout << "c=" << c << endl;

	// 可以直接给三目运算符返回的结果继续赋值，相当于赋值给了b。
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	// 这里相当于赋值给了a。
	(a < b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	
	system("pause");
	return 0;
}