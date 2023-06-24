/*
	定义常量的两种方式：
		1.#define定义宏常量。
		2.const修饰的变量是常变量，与常量有着本质上的不同，
		  const是去改变一个变量的存储类，把该变量所占的内存变为只读。

	学习记录：如果 #define 结尾加了分号，将会报错：“应输入表达式”。
*/
#include<iostream>
using namespace std;
#define Day 7 // 宏常量，一周有七天
int main()
{
	cout << "一周总共有:" << Day << "天" << endl;
	system("pause");
	return 0;
}
