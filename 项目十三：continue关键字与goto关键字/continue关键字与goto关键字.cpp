/*
	continue关键字与goto关键字都属于跳转语句。
	
	continue关键字：当执行到 continue 关键字时，循环体内 continue 语句之后的代码将被跳过，
					直接进入下一次循环的迭代。
	语法：continue;
	
	goto关键字：用于无条件地跳转到程序中的标记位置，并从那里继续执行。
				可能会导致程序变得混乱和难以理解，因此在实际编程中应该尽量避免使用 goto 语句，
				而是使用更结构化的控制流语句（如 for 循环、while 循环、if 语句等）。
	语法：
		  标记名:
		  后续语句1;
		  后续语句2;
		  后续语句3;
		  goto 标记名;(标记名通常使用大写的单词来表示，增强程序的可读性。)
		  
*/
#include <iostream>
using namespace std;
int main()
{
	// continue关键字示例:输出0-100中的奇数，偶数不输出
	for (int i = 0; i <= 100; i++)
	{
		if ( i % 2 == 0 )
		{
			continue;
		}
		cout << i << endl;
	}

	// goto关键字示例：
	cout << "1.xxxxxxx" << endl;
	goto FLAG;
	cout << "2.xxxxxxx" << endl;
	cout << "3.xxxxxxx" << endl;
	cout << "4.xxxxxxx" << endl;
	FLAG:
	cout << "5.xxxxxxx" << endl;

}