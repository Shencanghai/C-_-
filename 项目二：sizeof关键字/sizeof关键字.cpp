/*
	����Ҫ���Ǹ�������������ռ�õ��ڴ��С��ֻ��Ҫ����sizeof�ؼ��ּ��ɡ�
	�﷨��sizeof( �������� / ���� )
	
	ѧϰ��¼��long������windows��ռ�õ��ڴ�ռ�Ϊ4��Linux��ռ�õ��ڴ�ռ�Ϊ8��
*/
#include<iostream>
using namespace std;
int main()
{
	long num1 = 10;	
	short num2 = 20;
	int num3 = 100;
	long long num4 = 50;
	cout << "longռ�õ��ڴ�ռ�Ϊ��" << sizeof(long) << endl;
	cout << "shortռ�õ��ڴ�ռ�Ϊ��" << sizeof(num2) << endl;
	cout << "intռ�õ��ڴ�ռ�Ϊ��" << sizeof(int) << endl;
	cout << "long longռ�õ��ڴ�ռ�Ϊ��" << sizeof(num4) << endl;
	system("pause");
	return 0;
}