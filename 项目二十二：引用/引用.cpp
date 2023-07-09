/*
	1.引用的基础知识
		作用：给变量起别名，这样两个名称都可以操纵这块内存。

		语法：数据类型& 别名 = 变量原名 or 数据类型 &别名 = 变量原名;

		注意：b不能同时作为多个变量的别名。

		本质：引用的本质是一个指针常量(指向不可变)，编译器会自动将 int& b = a 变为 int* const b = &a 。

	2.如何引用一个常量
		利用关键字const ：const int& b = 10，编译器会自动将其变为 int temp = 10，int& b = temp 。

	3..引用作为函数形参
		作用：在函数传参时，可以通过引用让形参能够修饰实参，这样既可以避免使用指针，又可以避免复制数据。

	4..利用引用声明函数类型：int& Test()
		调用：假如 int& Test() 里面的返回语句是 return a，那么函数返回的是变量a(这个a不能是局部变量，因为局部变量
		的生命周期只在函数内部。可以用static声明成静态变量)的引用，因此也要用一个别名来接收这个函数的返回值，比如
		int& b = Test() 。
		
		补充：如果函数的返回值是引用，那么可以直接使用这个函数的调用可以作为左值，即 Test() = 1000 是成立的，与
		b = 1000 是一样的。
*/

#include <iostream>
using namespace std;

// 引用传递
void Swap(int& c, int& d)
{
	int temp = c;
	c = d;
	d = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	Swap(a, b);
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;

	system("pause");
	return 0;
}