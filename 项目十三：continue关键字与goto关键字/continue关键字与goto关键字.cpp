/*
	continue�ؼ�����goto�ؼ��ֶ�������ת��䡣
	
	continue�ؼ��֣���ִ�е� continue �ؼ���ʱ��ѭ������ continue ���֮��Ĵ��뽫��������
					ֱ�ӽ�����һ��ѭ���ĵ�����
	�﷨��continue;
	
	goto�ؼ��֣���������������ת�������еı��λ�ã������������ִ�С�
				���ܻᵼ�³����û��Һ�������⣬�����ʵ�ʱ����Ӧ�þ�������ʹ�� goto ��䣬
				����ʹ�ø��ṹ���Ŀ�������䣨�� for ѭ����while ѭ����if ���ȣ���
	�﷨��
		  �����:
		  �������1;
		  �������2;
		  �������3;
		  goto �����;(�����ͨ��ʹ�ô�д�ĵ�������ʾ����ǿ����Ŀɶ��ԡ�)
		  
*/
#include <iostream>
using namespace std;
int main()
{
	// continue�ؼ���ʾ��:���0-100�е�������ż�������
	for (int i = 0; i <= 100; i++)
	{
		if ( i % 2 == 0 )
		{
			continue;
		}
		cout << i << endl;
	}

	// goto�ؼ���ʾ����
	cout << "1.xxxxxxx" << endl;
	goto FLAG;
	cout << "2.xxxxxxx" << endl;
	cout << "3.xxxxxxx" << endl;
	cout << "4.xxxxxxx" << endl;
	FLAG:
	cout << "5.xxxxxxx" << endl;

}