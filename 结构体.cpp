  #include<iostream>;
using namespace std;
//����һ��ѧ������������
//ͨ��ѧ�����ʹ�������ѧ��
//�Զ�����������
struct teacher 
{
	int id;
	string name;
};
struct student
{
	//��Ա�б�
	string name;
	int age;
	int  score;
	struct teacher te;
};


int main()
{
	student t;
	t.te = { 10000,"jiuhong" };
	cout << t.te.id << endl;
	system("pause");
	return 0;
}