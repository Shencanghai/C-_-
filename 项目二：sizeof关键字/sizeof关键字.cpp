/*
	不需要死记各个数据类型所占用的内存大小，只需要会用sizeof关键字即可。
	语法：sizeof( 数据类型 / 变量 )
	
	学习记录：long类型在windows下占用的内存空间为4，Linux下占用的内存空间为8。
*/
#include<iostream>
using namespace std;
int main()
{
	long num1 = 10;	
	short num2 = 20;
	int num3 = 100;
	long long num4 = 50;
	cout << "long占用的内存空间为：" << sizeof(long) << endl;
	cout << "short占用的内存空间为：" << sizeof(num2) << endl;
	cout << "int占用的内存空间为：" << sizeof(int) << endl;
	cout << "long long占用的内存空间为：" << sizeof(num4) << endl;
	system("pause");
	return 0;
}