/*
	������������װһ������������ð�����򷨣�ʵ�ֶ������������������

	ѧϰ��¼��
	1. �����������ѡ��ʹ�ò������ݷ����еĵ�ַ���ݣ�����ڴ��� int arr[] �����ºô���
		��.�����޸�ԭʼֵ��ʹ��ָ�����ֱ���޸������е�Ԫ��ֵ��������ͨ������������в�����
		��.�����ڴ����ģ�ʹ��ָ�봫���������ʱ��ֻ��Ҫ���ݲ������׵�ַ�����������������ĸ�����
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
	cout << "����ð�ݺ�����飺"  << endl;
	for (int m = 0; m < len; m++)
	{
		cout << arr[m] << "\t";
	}
	cout << endl;

	system("pause");
	return 0;
}