#include<iostream>
using namespace std;
class student
{
public:
	string name;
	long long card;
	void show()
	{
		cout << "����:" << name << endl;
		cout << "ѧ�ţ�" << card << endl;
	}

};
int main()
{
	student s1;
	s1.name = "lijiuhong";
	s1.card = 20200200117;
	s1.show();
	system("pasuse");
	return 0;
}