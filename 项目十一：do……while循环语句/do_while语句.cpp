/*
	语法：
	do
	{
		循环语句
	}while (循环条件);

	注意：1.与while的区别在于do……while会先执行一次循环语句，再根据循环条件判断是否继续执行循环。
		  2.while后面要加; 。
	案例：在屏幕中输出0到9共十个数字。

	学习记录：
	1. while (num) 指的是num为真，即非零值时执行循环。
*/
#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);
	
	system("pause");
	return 0;
}