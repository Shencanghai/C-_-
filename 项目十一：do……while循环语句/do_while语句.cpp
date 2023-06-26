/*
	语法：
	do
	{
		循环语句
	}while (循环条件);

	注意：1.与while的区别在于do……while会先执行一次循环语句，再根据循环条件判断是否继续执行循环。
		  2.while后面要加; 。
	案例：水仙花数--水仙花数是指一个三位数，它的每个位上的数字的3次幂之和等于它本身。

	学习记录：
	1. while (num) 指的是num为真，即非零值时执行循环。
	2. 获取一个数字的个位：对数字取模于10，即 num % 10，例如 153%10 = 3 ；
	   获取一个数字的十位：对数字先整除于10(去掉个位数)再取模于10，即 (num/10)%10，例如153/10=15，15%10=5；
	   获取一个数字的百位：对数字先整除于100(去掉个位数和十位数)再取模于10，即 (num/100)%10；
	   ……
	   ……
	3. ^ 运算符是异或运算符，不是次方，如果是立方的话，应该使用pow(num,3)函数。
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num = 100;
	do
	{
		int a = num % 10;
		int b = (num / 10) % 10;
		int c = (num / 100) % 10;
		int sum = pow(a,3) + pow(b,3) + pow(c,3);
		if (sum == num)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	
	system("pause");
	return 0;
}