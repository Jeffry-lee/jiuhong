#include<iostream>
using namespace std;
int main() {
	//�˷��ھ���
	for (int i = 1; i <= 9; i++)
	{
		cout <<  endl;
		for (int j = 1; j <= i; j++) {
			cout << j << "*" << i << "=" << j * i << " ";
		}
	}
	cout << endl;


	system("pause");
	return 0;
}
