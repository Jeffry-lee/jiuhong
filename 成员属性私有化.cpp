#include<iostream>
using namespace std;
//��Ա��������˽��
//1.�����Լ����ƶ�д��Ȩ��
//2.����д���Լ�����ݵ���Ч��
class person
{
public:
	//��������
	void setnamme(string name)
	{
		m_name = name;
	}
//��ȡ����
	string getname()
	{
		return m_name;
	}
	void setage(int age)
	{
		if (age < 0 || age>120)
		{
			m_age = 0;
			cout << "��Ч����" << endl;
			return;
		}
		else
		{
			m_age = age;
		}
	}
	int getage()
	{
		
		return m_age;
	}
	void setlover(string lover)
	{
		m_lover = lover;
	}
private: 
	//�ɶ���д
	string m_name;
	//ֻ��
	int m_age;
	//ֻд
	string m_lover;
};
int main()
{
	person p;
	p.setnamme("�ú�");
	p.setlover("��ָ����");//������ݲ��ɷ���
	p.setage(19);
	cout << "����Ϊ:" << p.getname() << endl;
	cout << "����Ϊ:" << p.getage() << endl;
	

	system("pause");
	return 0;
}