#include<iostream>
using namespace std;
int main() {
	//�����������ӣ���ʱ��ı�
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1; //����0+1~99+1�����
	int a = 0;
		
		int val = 0;//������������
		
		while (a<=5)
		{
			cin >> val;
			if (val > num) {
				cout << "�²����" << endl;
			}
			else if (val < num) {
				cout << "�²��С" << endl;
			}

			else
			{
				cout << "��ϲ�㣬�¶���" << endl;
				break;//��ѭ���п����˳���ѭ��
			}
			a++;
			if (a > 5)
				break;

		}
		
		


	system("pause");
	return 0;

}