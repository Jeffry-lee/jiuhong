#include<iostream>
using namespace std;

//ָ������顢
//����ָ���������=�е�Ԫ��
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9
};
	int* p = arr;
	
	
	//����ָ���������
	for (int i = 0; i < 10; i++) {
		cout << *p << endl;
		p++;
	}
	
	system("pause");
	return 0;
}