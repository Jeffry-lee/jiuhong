#include<iostream>
using namespace std;
int main() {
//先输出1-100数字·
//从100个数字选出特殊数字，打印敲桌子。
	for (int i = 1; i <= 100;i++)
	{
		//如果是7的倍数，个位有7，或者十位有7，打印敲桌子·
		if (i%7==0||i%10==7||i/10==7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i<< endl;
		}
		
	}


	system("pause");
	return 0;
}
