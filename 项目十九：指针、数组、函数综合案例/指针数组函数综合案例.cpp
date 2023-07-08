/*
	案例描述：封装一个函数，利用冒泡排序法，实现对整型数组的升序排序。

	学习记录：
	1. 在这个函数中选择使用参数传递方法中的地址传递，相比于传入 int arr[] 有以下好处：
		①.可以修改原始值：使用指针可以直接修改数组中的元素值，而不是通过复制数组进行操作。
		②.减少内存消耗：使用指针传递数组参数时，只需要传递参数的首地址，而不是整个参数的副本。
*/
#include <iostream>
using namespace std;

void bubbleSort(int* arr,int len)
{
	for (int i = 1; i < len; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (arr[j] >= arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = {1654,48941,64,31485,4851,6544,32,49,1,6,784,56,6};
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);
	cout << "升序冒泡后的数组："  << endl;
	for (int m = 0; m < len; m++)
	{
		cout << arr[m] << "\t";
	}
	cout << endl;

	system("pause");
	return 0;
}