/*2020.05.04����ģ�塢��ģ�塢�쳣����*/
#include<iostream>
#include"head.h"
using namespace std;

/*����ģ�塢+*/
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
/*��ģ��*/
void classmudel()
{
	father<double> laoc(20.0);
	child xiaoc(10);
}

/*�쳣����*/
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
	catch (...)//int char class���������ͣ�...��ʾδ֪���ʹ���
	{
		cout << "����������";
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