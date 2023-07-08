// 分文件编写的源文件部分 - 在源文件中定义函数、包含头文件
#include "swap.h"
#include <iostream>
using namespace std;
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}