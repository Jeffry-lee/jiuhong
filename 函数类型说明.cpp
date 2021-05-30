#include<iostream>
using namespace std;

//不需要返回值时可以不写return,函数值传递
//同时也是有参无返类型函数
void swap(int num1, int num2 ){
	int temp = num1;
	num1 = num2;
	num2 = temp;
	
}
//定义无参无返函数
void test01() {
	cout << "thisi is a 无参无返函数" << endl;
}
//定义无参有返函数
int test03() {
	cout << "this is test03" << endl;
	return 0;
};
//定义有参有返函数调用
int test04(int a) {
	cout << "this is test 04 a="<<a<<endl;
	return a;
};
//函数调用
int main()
{
	int num1 = test03();
		cout << num1 << endl;
		int num3 = test04(10000);
		cout << num3<< endl; 
	test01();
	
	int d = 10;
	int e = 20;
	swap(d, e);
	
	cout << d << endl;
		system("pause");
	return 0;
}