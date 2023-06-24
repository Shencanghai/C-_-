/*
	浮点型变量用于定义小数。
	浮点型变量包含两种：
	float：	单精度  占用4字节的内存  7位有效数字 (有效数字包括整数部分)
	double：双精度	占用8字节的内存	 15-16位有效数字

	学习记录：
	1.编译器会默认把小数当成双精度浮点型。
	因此如果直接使用float接收小数，比如 float f1 = 3.14; ，编译器会多做一步把双精度转变成float。
	所以当需要指定float类型的小数时，要在小数后面加上f，比如float f1 = 3.14f; ，这样编译器就知道这是单精度的小数了。
	2.科学计数法。
	3.浮点型也可以接收整数，因为整数也算小数。
*/
#include<iostream>
using namespace std;
int main()
{
	float f1 = 3.14f;
	float f2 = 3e-2f; // 科学计数法：3 * 10^-2
	double d1 = 3.14;
	cout << "f1 = " << f1 << endl;
	cout << "f2 = " << f2 << endl;
	cout << "d1 = " << d1 << endl;
	cout << "float类型占据的内存空间为：" << sizeof(float) << endl;
	cout << "double类型占据的内存空间为：" << sizeof(d1) << endl;
	system("pause");
	return 0;
}