#include<iostream>
using namespace std;
//交换函数
//1.值传递
void myswap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//2.地址传递
void myswap02(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//3 .引用传递
void  myswap03(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	myswap03(a, b);
	myswap01(a, b);
	myswap02(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	


	system("pause");
	return 0;;
}