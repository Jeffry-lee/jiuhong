#include<iostream>
using namespace std;
int main() {
//�����1-100���֡�
//��100������ѡ���������֣���ӡ�����ӡ�
	for (int i = 1; i <= 100;i++)
	{
		//�����7�ı�������λ��7������ʮλ��7����ӡ�����ӡ�
		if (i%7==0||i%10==7||i/10==7)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << i<< endl;
		}
		
	}


	system("pause");
	return 0;
}
