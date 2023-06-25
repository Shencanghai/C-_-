/*
	语法：
	if (判断语句)
	{
		执行语句
	}
	else if (判断语句)
	{
		执行语句
	}
	else
	{
		执行语句
	}

	案例：三只小猪比体重。
	学习记录：
	注意小猪体重相等的情况。
*/

#include <iostream>
using namespace std;
int main()
{
	double pig1 = 0;
	cout << "请输入第一只小猪的体重(单位：kg)："  << endl;
	cin >> pig1;
	cout << "第一只小猪重" << pig1 << "kg" << endl;
	double pig2 = 0;
	cout << "请输入第二只小猪的体重(单位：kg)："  << endl;
	cin >> pig2;
	cout << "第二只小猪重" << pig2 << "kg" << endl;
	double pig3 = 0;
	cout << "请输入第三只小猪的体重(单位：kg)："  << endl;
	cin >> pig3;
	cout << "第三只小猪重" << pig3 << "kg" << endl;

	if (pig1 > pig2)
	{
		if (pig1 > pig3)
		{
			cout << "第一只小猪最重，它的重量为：" << pig1 << "kg" << endl;
		}
		else if (pig1 < pig3)
		{
			cout << "第三只小猪最重，它的重量为：" << pig3 << "kg" << endl;
		}
		else
		{
			cout << "第一只和第三只小猪最重，它们的重量为：" << pig1 << "kg" << endl;
		}
	}
	else if (pig1 < pig2)
	{
		if (pig2 > pig3)
		{
			cout << "第二只小猪最重，它的重量为：" << pig2 << "kg" << endl;
		}
		else if (pig2 < pig3)
		{
			cout << "第三只小猪最重，它的重量为：" << pig3 << "kg" << endl;
		}
		else
		{
			cout << "第二只和第三只小猪最重，它们的重量为：" << pig2 << "kg" << endl;
		}
	}
	else
	{
		if (pig1 > pig3)
		{
			cout << "第一只和第二只小猪最重，它们的重量为：" << pig1 << "kg" << endl;
		}
		else if (pig1 < pig3)
		{
			cout << "第三只小猪最重，它的重量为：" << pig3 << "kg" << endl;
		}
		else
		{
			cout << "三只小猪一样重，它们的体重为：" << pig1 << "kg" << endl;
		}
	}
	system("pause");
	return 0;
}
