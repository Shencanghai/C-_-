/*
	案例：利用指针操作数组，显示数组里特定的元素。
*/
#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "数组中的第5个元素为：" << arr[4] << endl;
	int* p = arr; // 数组名就是数组的首地址
	cout << "利用指针显示数组中的第5个元素为：" << *(p + 4) << endl;
	
	system("pause");
	return 0;
}