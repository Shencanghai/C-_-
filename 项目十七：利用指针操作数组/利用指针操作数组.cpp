/*
	����������ָ��������飬��ʾ�������ض���Ԫ�ء�
*/
#include <iostream>
using namespace std;
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "�����еĵ�5��Ԫ��Ϊ��" << arr[4] << endl;
	int* p = arr; // ����������������׵�ַ
	cout << "����ָ����ʾ�����еĵ�5��Ԫ��Ϊ��" << *(p + 4) << endl;
	
	system("pause");
	return 0;
}