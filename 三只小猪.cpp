#include <iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "请输入a的体重:" << endl;
	cout << "请输入b的体重:" << endl;
	cout << "请输入c的体重:" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a > b and a>c){
		cout << "a的体重更重" << endl;
	}
	else if(b>a and b>c)
	{
		cout << "b的体重更重" << endl;
	}
	else {
		cout << "c的体重更重" << endl;
	}

	system("pause");
	return 0;
}