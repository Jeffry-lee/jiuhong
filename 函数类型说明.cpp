#include<iostream>
using namespace std;

//����Ҫ����ֵʱ���Բ�дreturn,����ֵ����
//ͬʱҲ���в��޷����ͺ���
void swap(int num1, int num2 ){
	int temp = num1;
	num1 = num2;
	num2 = temp;
	
}
//�����޲��޷�����
void test01() {
	cout << "thisi is a �޲��޷�����" << endl;
}
//�����޲��з�����
int test03() {
	cout << "this is test03" << endl;
	return 0;
};
//�����в��з���������
int test04(int a) {
	cout << "this is test 04 a="<<a<<endl;
	return a;
};
//��������
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