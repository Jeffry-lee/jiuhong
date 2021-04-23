#include<iostream>
using namespace std;
int main() {
	//添加随机数种子，随时间改变
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1; //生成0+1~99+1随机数
	int a = 0;
		
		int val = 0;//玩家输入的数据
		
		while (a<=5)
		{
			cin >> val;
			if (val > num) {
				cout << "猜测过大" << endl;
			}
			else if (val < num) {
				cout << "猜测过小" << endl;
			}

			else
			{
				cout << "恭喜你，猜对了" << endl;
				break;//在循环中可以退出该循坏
			}
			a++;
			if (a > 5)
				break;

		}
		
		


	system("pause");
	return 0;

}