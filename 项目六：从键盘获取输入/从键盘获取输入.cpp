/*
	�ؼ��֣�cin
	���ã��Ӽ��̻�ȡ���롣
	�﷨��cin >> ����
*/
#include <iostream>
using namespace std;
int main()
{
	// ��������
	int a = 0;
	cout << "������һ���������ݣ�" << endl;
	cin >> a;
	cout << "a = " << a << endl;
	// ����������
	double d = 0;
	cout << "������һ���������������ݣ�" << endl;
	cin >> d;
	cout << "d = " << d << endl;
	// �ַ�������
	char ch = 0;
	cout << "������һ���ַ������ݣ�" << endl;
	cin >> ch;
	cout << "ch = " << ch << endl;
	// �ַ���������
	string str = "llla";
	cout << "������һ���ַ��������ݣ�" << endl;
	cin >> str;
	cout << "str = " << str << endl;
	// ����������
	bool flag = false;
	cout << "������һ�����������ݣ�" << endl;
	cin >> flag;
	cout << "flag = " << flag << endl;
	
	system("pause");
	return 0;
}