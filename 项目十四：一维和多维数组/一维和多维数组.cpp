/*
	一维数组的定义方式：
	1. 数据类型 数组名[数组长度] = {值1 , 值2 , ……};
	2. 数据类型 数组名[] = {值1 , 值2 , ……}; 
	3. 数据类型 数组名[数组长度];
	4. 使用 ‘动态数组容器’ 或 ‘智能指针’ 来定义数组更加安全和灵活。
		容器： std::array<数据类型, 数组长度> 数组名 = {值1, 值2, 值3};
			   std::vector<数据类型> 数组名 = {值1 , 值2 , ……};
			   std::vector<数据类型> 数组名(数组长度);
		智能指针：
			   std::unique_ptr<数据类型[]> 数组名(new关键字 数据类型[数组长度]{值1,值2,……});
	二维数组的定义方式：
	1. 数据类型 数组名[行数][列数];
   *2. 数据类型 数组名[行数][列数] = 
	   { 
	     {数据1,数据2},
	     {数据3,数据4} 
	   };
	3. 数据类型 数组名[行数][列数] = {数据1,数据2,数据3,数据4};
	4. 数据类型 数组名[][列数]	   = {数据1,数据2,数据3,数据4};

	数组的特点：
	1. 数组放在一块连续的内存块中，也因此没有直接的方法可以一次性输出整个数组。
	2. 想要输出整个数组，最常用的方式是使用循环遍历。

	数组名的用途：
	1. 可以通过数组名查看整个数组占用的内存大小； --- sizeof(arr)
	2. 可以通过数组名查看数组的首地址。 --- cout << arr << endl;
	
	补：
	1. 元素个数 = sizeof(arr) / sizeof(arr[0])
	   二维数组的行数 = sizeof(arr) / sizeof(arr[0])
	   二维数组的列数 = sizeof(arr[0]) / sizeof(arr[0][0])
	2. 利用取址符号&可以查看某个元素的地址 --- cout << &arr[i] << endl;
										   --- cout << &arr[i][j] << endl;
	   将十六进制的地址转化为整型(十进制)  --- cout << (int)&arr[i] << endl;
	   
	案例：
	1. 输出数组中最大的元素。- 创建一个存储最大值的变量，如果当前元素比当前的最大值大，更新最大值。
	2. 元素逆置。- 循环体有两个，一端++，一端-- 。
	3. 冒泡排序。- 每轮截至下标与当前轮数的关系
	
	学习记录：
	1. new 是 C++ 中的关键字，用于在动态存储区（堆）上分配内存空间，注意这种方式无需定义对象名
	   或数组名，只需要指明保存的数据类型和占用多大的内存空间即可。需要手动释放内存。
	
	2. 在栈上定义数组时，如果数组长度过大，可能导致栈溢出。可以考虑将数组分配到动态存储区（堆）
	   中来避免栈溢出问题，方法主要如下。
			①.使用 new 关键字分配内存空间，这种方式无需定义对象名或数组名，需手动释放内存：
				int* ptr = new int[100];  // 在堆上分配大小为100的整数数组,并返回指向该内存的指针
				// 使用指针访问和操作数组
				delete[] ptr;  // 释放堆上分配的数组内存
			
			②.使用动态数组容器，例如std::vector，可以方便地实现将数组从栈上移到堆上，
			   还可以自动管理内存的分配和释放。
			     #include <vector>
				 std::vector<int> arr(100);  // 在堆上分配大小为100的整数数组,并返回指向该内存的指针
				 // 使用容器访问和操作数组
				 // 不需要手动释放内存，std::vector会自动管理内存

	3. 使用堆上的内存空间通常需要使用指针来引用这块内存,返回的也是指向分配内存的指针，需要使用
	   指针来访问和操作这块内存，比如：
				int* ptr = new int;  // 在堆上分配一个整数的内存，并返回指向该内存的指针
				*ptr = 10;  // 使用指针访问和操作堆上的内存
				delete ptr;  // 释放堆上分配的内存
*/
#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main()
{
	// 如何利用指针来操作数组中的第100个元素，输出第100个元素时又应该怎么表示
	int* arr = new int[100];	// arr是指针名，没有数组名
	*(arr + 99) = 18;			// 解指针
	cout << arr[99] << endl;
	// 由于这里的arr是指针名，而不是数组名，因此sizeof(arr) 获取的是指针占用的内存大小，不再是
	// 该数组占用的内存大小了。
	cout << sizeof(arr) << endl;
	// sizeof(int) * 100 的结果才是该数组占用的内存大小
	cout << ( sizeof(int) * 100 ) << endl;

	vector<int> arr1 = {5,2,0,0,0};
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] << "\t";
	}
	cout << endl;

	// *输出数组中的最大值
	int arr3[] = {100,500,600,350,450,300,550};
	int max = 0;
	for (int i = 0; i < ( sizeof(arr3) / sizeof( arr3[0] ) ); i++)
	{
		if ( arr3[i] > max)
		{
			max = arr3[i];
		}
	}
	cout << "数组中的最大值为：" << max << endl;

	// *元素逆置
	// ① 记录起始下标和结束下标
	// ② 进行当前起始下标和结束下标的元素互换(需要创建一个临时内存)
	// ③ 起始下标++ ，结束下标-- 
	// ④ 循环执行②，直到起始下标 >= 结束下标
	// ⑤ 利用循环遍历打印新的数组
	int arr4[] = { 5,6,3,8,1,6,48,6,4,3,6,7,84,49 };
	cout << "数组元素逆置前:" << endl;
	for (int k = 0; k < (sizeof(arr4) / sizeof(arr4[0])); k++)
	{
		cout << arr4[k] << "\t";
	}
	cout << endl;
	int start = 0;
	int end = sizeof(arr4) / sizeof(arr4[0]) - 1;
	while ( start < end )
	{
		int temp = arr4[start];
		arr4[start] = arr4[end];
		arr4[end] = temp;
		start++;
		end--;
	}
	cout << "数组元素逆置后:" << endl;
	for (int k = 0; k < ( sizeof(arr4) / sizeof(arr4[0]) ); k++)
	{
		cout << arr4[k] << "\t";
	}
	cout << endl;

	// **冒泡排序(以降序为例)
	int arr5[] = { 468,64,1265,48,15,34,48,12,644,174 };
	cout << "数组元素排序前:" << endl;
	for (int k = 0; k < (sizeof(arr5) / sizeof(arr5[0])); k++)
	{
		cout << arr5[k] << "\t";
	}
	cout << endl;
	for (int i = 1; i < (sizeof(arr5) / sizeof(arr5[0])); i++)
	{
		for (int k = 0; k <= (sizeof(arr5) / sizeof(arr5[0]) - i); k++)
		{
			int temp = arr5[k];
			if (arr5[k] < arr5[k + 1])
			{
				arr5[k] = arr5[k + 1];
				arr5[k + 1] = temp;
			}
		}
	}
	cout << "数组元素排序后:" << endl;
	for (int k = 0; k < (sizeof(arr5) / sizeof(arr5[0])); k++)
	{
		cout << arr5[k] << "\t";
	}

	system("pause");
	return 0;
}