#include<iostream>
using namespace std;
int main() {
	//����ð������Ϊʵ��һ�����������
	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	cout << "����ǰ��" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";

	}
	cout << endl;
	//ð������;
	for (int i = 0; i < 8; i++)
	{
//����ѭ���Ա�
		for (int j = 0; j < 9 - i - 1; j++)
		{
			//�����һ�����ֱȵڶ������ִ󼴽���
			if (arr[j] > arr[j + 1])
				{
					int temp=arr[j];
					arr[j]=arr[j+1];
				arr[j+1]=temp;
				}
	}
	}
	//�������
	cout << "�������:" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
		
	}cout << endl;
	system("pause");
	return 0;
}