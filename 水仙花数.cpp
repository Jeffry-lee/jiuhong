#include<iostream>
using namespace std;
int main() {
	//do while���
	//do while ����ִ��һ��ѭ���ṹ��while����
		int num = 100;
		
		do
		{
			int a = 0;//��λ
			int b = 0;//ʮλ
			int c = 0;//��λ

			a = num % 10;//��ȡ��λ
			b = num / 10 % 10;//��ȡʮλ
			c = num /100;//��ȡ��λ
			if(a*a*a+b*b*b+c*c*c==num)
			//�����ˮ�ɻ������Ŵ�ӡ
			{
			cout << num << endl;
			}
			num++;
		} while (num<1000);
		





	system("pause");
	return 0;
}