#include <iostream>
using namespace std;

int main()
{
	int list[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	for (int k = 0; k <10; k++)
	{
		cout << " " << list[k];
	}
	cout << endl;

	//�������в���Ԫ��
	/*int insert = 10;
	for (int i = 8; i > 0; i--)
	{
	list[i + 1] = list[i];
	}
	list[1] = 10;*/

	//��������ɾ��Ԫ��
	for (int i = 4; i < 10; i++)
	{
		list[i] = list[i + 1];
	}
	list[9] = 0;

	//��ӡ������
	for (int j = 0; j <10; j++)
	{
		cout << list[j] << endl;
	}
	return 0;
}
