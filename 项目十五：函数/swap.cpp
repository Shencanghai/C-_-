// ���ļ���д��Դ�ļ����� - ��Դ�ļ��ж��庯��������ͷ�ļ�
#include "swap.h"
#include <iostream>
using namespace std;
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}