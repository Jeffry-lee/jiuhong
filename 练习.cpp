#include<iostream>
using namespace std;

int main() {
//ѡ��ṹ��
	//����if���
	//���뿼�Է����������������600Ϊ����һ����ѧ������500�ֿ��϶�����ѧ������400�ֿ��������ѧ��û��400�֣���Ϊδ
	//���뱾��
	int score = 0;
	cout << "������һ�����Է���:" << endl;
	cin >> score;
	cout << "������ķ���Ϊ;" << score << endl;
	if (score >= 600) {
		cout << "��ϲ��������һ����ѧ" << endl;

		if (score >= 700) {
			{
				cout << "��ϲ�����廪��ѧ" << endl; }
		}
		else if (score >= 650) {
			cout << "��ϲ���뱱����ѧ" << endl;
		}
		else
		{
			cout << "��ϲ�㿼�������ѧ" << endl;
		}
	}
	
	else if (score >= 500)
		cout << "��ϲ�㣬�����˶�����ѧ" << endl;
	else if (score >= 400)
		cout << "������������ѧ" << endl;

	else {
		cout << "��Ǹ��δ���뱾�ƴ�ѧ" << endl;
	}

	
	system("pause");

	return 0;
}