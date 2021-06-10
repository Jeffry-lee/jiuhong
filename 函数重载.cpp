#include<iostream>
using namespace std;
//函数重载满足条件
//1.在同一个作用域下
//2.函数名称相同
//3.函数参数类型不同，或者个数不同1，或者顺序不同。
//4.函数的返回值不可以作为重载的对象 
void func()
{
	cout << "func的调用" << endl;

}
void func(int a)
{
	cout << "func(inta)的调用" << endl;
}
int main()
{
	
	
	
	system("pause");
	return 0;
}