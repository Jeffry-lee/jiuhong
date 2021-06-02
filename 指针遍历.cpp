#include<iostream>
using namespace std;

//指针和数组、
//利用指针访问数组=中的元素
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9
};
	int* p = arr;
	
	
	//利用指针遍历数组
	for (int i = 0; i < 10; i++) {
		cout << *p << endl;
		p++;
	}
	
	system("pause");
	return 0;
}