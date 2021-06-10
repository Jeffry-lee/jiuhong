#include<iostream>
using namespace std;
//成员属性设置私有
//1.可以自己控制读写的权限
//2.对于写可以检测数据的有效性
class person
{
public:
	//设置姓名
	void setnamme(string name)
	{
		m_name = name;
	}
//获取姓名
	string getname()
	{
		return m_name;
	}
	void setage(int age)
	{
		if (age < 0 || age>120)
		{
			m_age = 0;
			cout << "无效年龄" << endl;
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
	//可读可写
	string m_name;
	//只读
	int m_age;
	//只写
	string m_lover;
};
int main()
{
	person p;
	p.setnamme("久洪");
	p.setlover("五指姑娘");//这个数据不可访问
	p.setage(19);
	cout << "姓名为:" << p.getname() << endl;
	cout << "年龄为:" << p.getage() << endl;
	

	system("pause");
	return 0;
}