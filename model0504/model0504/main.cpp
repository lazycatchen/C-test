/*2020.05.04函数模板、类模板、异常处理*/
#include<iostream>
#include"head.h"
using namespace std;

/*函数模板、+*/
template <typename T>
void swap1(T &num1, T &num2)
{
	T temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
void swapcall()
{
	int temp1 = 10;
	int temp2 = 51;
	swap1(temp1, temp2);
	cout << temp2<< endl;
}
/*类模板*/
void classmudel()
{
	father<double> laoc(20.0);
	child xiaoc(10);
}

/*异常处理*/
int devide(int a, int b)
{
	if (b == 0)
	{throw b;};
	return a / b;
}
void errortest()
{
	int a; int b;
	cin >> a;
	cin >> b;
	try {
		cout << devide(a, b) << endl;
	}
	catch (...)//int char class等数据类型，...表示未知类型错误
	{
		cout << "被除数错误";
	}

}
int main()
{
	//swapcall();
	//classmudel();
	errortest();
	system("pause");
	return 0;
}