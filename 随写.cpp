#include<iostream>
using namespace std;
int main() {
	//��һ����Ӱ���
	//10-9����
	//8-7�ǳ���
	//6-5һ��
	//5������Ƭ
	cout << "�����Ӱ���" << endl;
	int score = 0;
	cin >> score;
	cout << "���ķ���Ϊ��" << endl;
	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl; break;
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl; break;
	case 8 :
		cout << "����Ϊ��Ӱ����" << endl; break;
	case 7:
		cout << "����Ϊ��Ӱ����" << endl; break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl; break;
	default:
		cout << "��������Ƭ" << endl;
		break;
	}
}