/*
	���ã����ڶ��֧�������ж���䣬���ݱ��ʽ�Ľ�����ж�ִ���ĸ���֧,�÷�ִ֧������ս�öδ��롣
	�﷨��
	switch (���ʽ)
	{
	case ���1 : 
		 ִ�����1;
		 break;
	case ���2 :
		 ִ�����2;
		 break;
	����
	default:
		Ĭ��ִ����䣻
		break��
	}

	�����������û�����Ӱ��ķ������жϵ�Ӱ��������
	ѧϰ��¼��
	1.switch��������Ч�ش�����ѡ��������ʹ�ô�����Ӽ��Ϳɶ���
	����Ҫע����ǣ���ÿ��case������ʹ��break���������ִ������case�����顣
	���û��break��䣬�������"case��͸"���������ִ����һ��case������󣬻����ִ����һ��case�����顣
	2.��C++�У�switch����case����ֻ���ǳ���(���������ַ���)��������������������ʽ��
	switch���ŵ㣺�ṹ����������ִ��Ч�ʱ�if���Ҫ�ߡ�
*/
#include <iostream>
using namespace std;
int main()
{
	cout << "�����Ӱ���(10���ƣ��Ҵ�ֱ���Ϊ����)" << endl;
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ:" << score << "��" << endl;
	switch (score)
	{
	case 10 :
		cout << "����Ϊ�õ�Ӱ�Ǿ����Ӱ" << endl;
		break;
	case 9:
		cout << "����Ϊ�õ�Ӱ�Ǿ����Ӱ" << endl;
		break;
	case 8  :
		cout << "����Ϊ�õ�Ӱ��һ���ܺõĵ�Ӱ" << endl;
		break;
	case 7:
		cout << "����Ϊ�õ�Ӱ��һ���ܺõĵ�Ӱ" << endl;
		break;
	case 6:
		cout << "����Ϊ�õ�Ӱ������" << endl;
		break;
	case 5:
		cout << "����Ϊ�õ�Ӱ��ǿ�ܿ�" << endl;
		break;
	default :
		cout << "����Ϊ�õ�Ӱ��һ����Ƭ" << endl;


	}

	system("pause");
	return 0;
}