/*
	�﷨��
	if (�ж����)
	{
		ִ�����
	}
	else if (�ж����)
	{
		ִ�����
	}
	else
	{
		ִ�����
	}

	��������ֻС������ء�
	ѧϰ��¼��
	ע��С��������ȵ������
*/

#include <iostream>
using namespace std;
int main()
{
	double pig1 = 0;
	cout << "�������һֻС�������(��λ��kg)��"  << endl;
	cin >> pig1;
	cout << "��һֻС����" << pig1 << "kg" << endl;
	double pig2 = 0;
	cout << "������ڶ�ֻС�������(��λ��kg)��"  << endl;
	cin >> pig2;
	cout << "�ڶ�ֻС����" << pig2 << "kg" << endl;
	double pig3 = 0;
	cout << "���������ֻС�������(��λ��kg)��"  << endl;
	cin >> pig3;
	cout << "����ֻС����" << pig3 << "kg" << endl;

	if (pig1 > pig2)
	{
		if (pig1 > pig3)
		{
			cout << "��һֻС�����أ���������Ϊ��" << pig1 << "kg" << endl;
		}
		else if (pig1 < pig3)
		{
			cout << "����ֻС�����أ���������Ϊ��" << pig3 << "kg" << endl;
		}
		else
		{
			cout << "��һֻ�͵���ֻС�����أ����ǵ�����Ϊ��" << pig1 << "kg" << endl;
		}
	}
	else if (pig1 < pig2)
	{
		if (pig2 > pig3)
		{
			cout << "�ڶ�ֻС�����أ���������Ϊ��" << pig2 << "kg" << endl;
		}
		else if (pig2 < pig3)
		{
			cout << "����ֻС�����أ���������Ϊ��" << pig3 << "kg" << endl;
		}
		else
		{
			cout << "�ڶ�ֻ�͵���ֻС�����أ����ǵ�����Ϊ��" << pig2 << "kg" << endl;
		}
	}
	else
	{
		if (pig1 > pig3)
		{
			cout << "��һֻ�͵ڶ�ֻС�����أ����ǵ�����Ϊ��" << pig1 << "kg" << endl;
		}
		else if (pig1 < pig3)
		{
			cout << "����ֻС�����أ���������Ϊ��" << pig3 << "kg" << endl;
		}
		else
		{
			cout << "��ֻС��һ���أ����ǵ�����Ϊ��" << pig1 << "kg" << endl;
		}
	}
	system("pause");
	return 0;
}
