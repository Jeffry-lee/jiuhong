#include<iostream>
using namespace std;
int main() {
	//ʵ������Ԫ������
		//1.��������
	int arr[] = { 1, 3, 4, 5, 6 };
	cout << "��������ǰ�����" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//ʵ������
	//2.1��¼��ʼ�±��λ��
	//2.2��¼�����±��λ��
	//2.3��ʼ�±���Ԫ���±��Ԫ�ػ���
	//2.4��ʼλ��++������λ��--
	//2.5ѭ��ִ��2.1������ֱ����ʼλ��>=����λ��

	
	int start = 0;//��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//�����±�
	//ʵ��Ԫ�ػ���
	while (start<end)
	
	{
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	//�±����
	start++;
	end--;
}
	//��ӡ���ú������
	cout << "���ú������" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
		system("pause");
	return 0;
}
