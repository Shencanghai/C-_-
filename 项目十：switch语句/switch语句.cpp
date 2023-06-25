/*
	作用：用于多分支的条件判断语句，根据表达式的结果来判断执行哪个分支,该分支执行完后即终结该段代码。
	语法：
	switch (表达式)
	{
	case 结果1 : 
		 执行语句1;
		 break;
	case 结果2 :
		 执行语句2;
		 break;
	……
	default:
		默认执行语句；
		break；
	}

	案例：根据用户给电影打的分数，判断电影的质量。
	学习记录：
	1.switch语句可以有效地处理多个选项的情况，使得代码更加简洁和可读。
	但需要注意的是，在每个case语句块中使用break语句来避免执行其他case的语句块。
	如果没有break语句，将会出现"case穿透"的情况，即执行完一个case的语句块后，会继续执行下一个case的语句块。
	2.在C++中，switch语句的case后面只能是常量(包括数和字符串)，不能是区间或变量或表达式。
	switch的优点：结构清晰，而且执行效率比if语句要高。
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "请给电影打分(10分制，且打分必须为整数)" << endl;
	int score = 0;
	cin >> score;
	cout << "您打的分数为:" << score << "分" << endl;
	switch (score)
	{
	case 10 :
		cout << "您认为该电影是经典电影" << endl;
		break;
	case 9:
		cout << "您认为该电影是经典电影" << endl;
		break;
	case 8  :
		cout << "您认为该电影是一部很好的电影" << endl;
		break;
	case 7:
		cout << "您认为该电影是一部很好的电影" << endl;
		break;
	case 6:
		cout << "您认为该电影还不错" << endl;
		break;
	case 5:
		cout << "您认为该电影勉强能看" << endl;
		break;
	default :
		cout << "您认为该电影是一部烂片" << endl;


	}

	system("pause");
	return 0;
}