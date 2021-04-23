#include<iostream>
using namespace std;

int main() {
//选择结构；
	//多行if语句
	//输入考试分数，如果分数大于600为考入一本大学，大于500分考上二本大学，大于400分考入二本大学，没有400分，则为未
	//考入本科
	int score = 0;
	cout << "请输入一个考试分数:" << endl;
	cin >> score;
	cout << "你输入的分数为;" << score << endl;
	if (score >= 600) {
		cout << "恭喜，考入了一本大学" << endl;

		if (score >= 700) {
			{
				cout << "恭喜考入清华大学" << endl; }
		}
		else if (score >= 650) {
			cout << "恭喜考入北京大学" << endl;
		}
		else
		{
			cout << "恭喜你考入人民大学" << endl;
		}
	}
	
	else if (score >= 500)
		cout << "恭喜你，考入了二本大学" << endl;
	else if (score >= 400)
		cout << "考入了三本大学" << endl;

	else {
		cout << "抱歉你未考入本科大学" << endl;
	}

	
	system("pause");

	return 0;
}