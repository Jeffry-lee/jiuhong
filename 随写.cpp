#include<iostream>
using namespace std;
int main() {
	//给一个电影打分
	//10-9经典
	//8-7非常好
	//6-5一般
	//5以下烂片
	cout << "请给电影打分" << endl;
	int score = 0;
	cin >> score;
	cout << "你打的分数为：" << endl;
	switch (score)
	{
	case 10:
		cout << "你认为是经典电影" << endl; break;
	case 9:
		cout << "你认为是经典电影" << endl; break;
	case 8 :
		cout << "你认为电影不错" << endl; break;
	case 7:
		cout << "你认为电影不错" << endl; break;
	case 6:
		cout << "你认为电影一般" << endl; break;
	default:
		cout << "绝对是烂片" << endl;
		break;
	}
}