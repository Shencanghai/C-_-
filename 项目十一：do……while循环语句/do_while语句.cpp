/*
	�﷨��
	do
	{
		ѭ�����
	}while (ѭ������);

	ע�⣺1.��while����������do����while����ִ��һ��ѭ����䣬�ٸ���ѭ�������ж��Ƿ����ִ��ѭ����
		  2.while����Ҫ��; ��
	����������Ļ�����0��9��ʮ�����֡�

	ѧϰ��¼��
	1. while (num) ָ����numΪ�棬������ֵʱִ��ѭ����
*/
#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);
	
	system("pause");
	return 0;
}