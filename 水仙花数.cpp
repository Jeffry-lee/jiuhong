#include<iostream>
using namespace std;
int main() {
	//do while���
	//do while ����ִ��һ��ѭ���ṹ��while����
		int num = 1000;
		
		do
		{
			int a = 0;//��λ
			int b = 0;//ʮλ
			int c = 0;//��λ
			int d = 0;//ǧλ
			 
			a = num % 10;//��ȡ��λ
			b = num / 10 % 10;//��ȡʮλ
			c = num  / 100 % 10;//��ȡ��λ
			d = num / 1000;//��ȡǧλ1239
			if(a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d==num)
			//�����ˮ�ɻ������Ŵ�ӡ
			{
			cout << num << endl;
			}
			num++;
		} while (num<10000);
		
		





	system("pause");
	return 0;
}