#include<iostream>
using namespace std;
//���һ��Բ����Բ���ܳ�
//Բ���ܳ���ʽ
//Բ����
const double PI = 3.14;
class circle
{
	//����Ȩ��
	//����Ȩ��
public:
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double zhouchang()
	{
		return 2 * PI * m_r;
	}
};
int main()
{	//��������
	circle c1;
	c1.m_r = 10;
	cout << "Բ���ܳ���" << c1.zhouchang() << endl;


	system("pause");
	return 0;
}