/*
	���ã��������͵ı������ڴ���true(1)��false(0)��
	�﷨��bool ������ = true�����ֵ/false��0 ,����ֱ�Ϊ1/0 ��
	�ڴ棺�������͵ı���ֻռһ���ֽڵ��ڴ档

	ѧϰ��¼��
	1.������㸳�� bool ���͵ı������ᱻ��ʽת��Ϊ false��
	  ���������ֵ���� bool ���͵ı������ᱻ��ʽת��Ϊ true��
*/
#include <iostream>
using namespace std;
int main()
{
	bool flag = true;
	cout << flag << endl;
	cout << "bool���͵ı���ռ�õ��ڴ��СΪ��" << sizeof(flag) << "���ֽ�" << endl;
	flag = false;
	cout << flag << endl;
	cout << "bool���͵ı���ռ�õ��ڴ��СΪ��" << sizeof(flag) << "���ֽ�" << endl;
	flag = 0;
	cout << "falg = " << flag << endl;
	flag = 156.2;
	cout << "falg = " << flag << endl;
	system("pause");
	return 0;
}