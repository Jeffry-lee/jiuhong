#include <iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "������a������:" << endl;
	cout << "������b������:" << endl;
	cout << "������c������:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a > b and a>c){
		cout << "a�����ظ���" << endl;
	}
	else if(b>a and b>c)
	{
		cout << "b�����ظ���" << endl;
	}
	else {
		cout << "c�����ظ���" << endl;
	}

	system("pause");
	return 0;
}