#include<iostream>
using namespace std;
int main() {
	//do while语句
	//do while 会先执行一次循环结构，while不会
		int num = 1000;
		
		do
		{
			int a = 0;//个位
			int b = 0;//十位
			int c = 0;//百位
			int d = 0;//千位
			 
			a = num % 10;//获取个位
			b = num / 10 % 10;//获取十位
			c = num  / 100 % 10;//获取百位
			d = num / 1000;//获取千位1239
			if(a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d==num)
			//如果是水仙花数，才打印
			{
			cout << num << endl;
			}
			num++;
		} while (num<10000);
		
		





	system("pause");
	return 0;
}