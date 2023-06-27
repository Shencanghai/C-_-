/*
	语法：
	for(起始表达式;循环条件;末尾循环体)
	{
		执行语句;
	}
	
	精辟所在：
	1. for循环可以将while循环中的三个内容在一个小括号里全部包括，十分简练。
	2. for循环的小括号里的三个部分每一个部分都可以单独拆分出来，但分号仍需保留。
	
	案例一：拆分和不拆分方式分别输出0到9。
	案例二：“敲桌子”游戏--从1开始数到数字100，如果数字个位或十位含有7，亦或该数字是7的倍数，
	就需要敲一下桌子(程序里为打印出敲桌子,其余数字则直接打印出数字本身)。

	学习记录：
	1. for (;;) 注意这是一个无限循环，必须要人为指定什么时候使用break终止程序。
	2. 注意九九乘法表的内部的for循环的循环条件是 列数的迭代<=行数的迭代 。
*/
#include <iostream>
using namespace std;
int main()
{
	// 全部包含进小括号内
	for (int num = 0; num < 10; num++)
	{
		cout << num << endl;
	}

	// 每一个部分都可以拆分出来
	int num = 0;
	for (;;) //注意这是一个无限循环，必须要指定什么时候使用break终止程序。
	{
		if (num < 10)
		{
			cout << num << endl;
			num++;
		}
		else
		{
			break;
		}
	}

	// 案例二：敲桌子游戏
	for (int i = 1; i < 101; i++)
	{
		if ( i % 10 == 7 || i / 10 == 7 || i % 7 == 0 )
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

	// 九九乘法表（错误的）
	//for (int n = 1; n < 10; n++)
	//{
	//	for (int m = 1; m < 10; m++)
	//	{
	//		int sum = n * m;
	//		cout << m << "×" << n << "=" << sum << "\t";
	//	}
	//	cout << endl;
	//}
	for (int i = 1; i <= 9; i++) 
	{
		for (int j = 1; j <= i; j++) 
		{
			cout << j << " * " << i << " = " << j * i << "\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}