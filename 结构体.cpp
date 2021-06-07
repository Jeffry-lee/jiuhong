  #include<iostream>;
using namespace std;
//创建一个学生的数据类型
//通过学生类型创建具体学生
//自定义数据类型
struct teacher 
{
	int id;
	string name;
};
struct student
{
	//成员列表
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