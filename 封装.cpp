#include<iostream>
using namespace std;
//设计一个圆类求圆的周长
//圆求周长公式
//圆周率
const double PI = 3.14;
class circle
{
	//访问权限
	//公共权限
public:
	int m_r;
	//行为
	//获取圆的周长
	double zhouchang()
	{
		return 2 * PI * m_r;
	}
};
int main()
{	//创建对象
	circle c1;
	c1.m_r = 10;
	cout << "圆的周长：" << c1.zhouchang() << endl;


	system("pause");
	return 0;
}