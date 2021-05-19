#include<iostream>
using namespace std;
int main() {
	//实现数组元素逆置
		//1.创建数组
	int arr[] = { 1, 3, 4, 5, 6 };
	cout << "数组逆置前结果：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//实现逆置
	//2.1记录起始下标的位置
	//2.2记录结束下标的位置
	//2.3起始下标与元素下标的元素互换
	//2.4起始位置++，结束位置--
	//2.5循环执行2.1操作，直到起始位置>=结束位置

	
	int start = 0;//起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//结束下标
	//实现元素互换
	while (start<end)
	
	{
	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;
	//下标更新
	start++;
	end--;
}
	//打印逆置后的数组
	cout << "逆置后的数组" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
		system("pause");
	return 0;
}
