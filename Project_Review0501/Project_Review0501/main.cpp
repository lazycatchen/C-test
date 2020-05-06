#include<iostream>
#include"head01.h"
//2020.5.1 复习namespace、c++ const语句、引用本质、常引用只读
using namespace std;
/*const左结合，左定值右定向*/
void constTest()
{
	int temp = 2;
	int changetemp = 3;
	int* const p1 = &temp;
	const int * p2 = &changetemp;//const左结合，左定值右定向
	changetemp = 3l;
	cout << *p1 << *p2;
}
/*引用的本质是一个常指针*/
void clip()
{
	int cliptemp = 10;
	int& p1 = cliptemp;
	int * const p2 = &cliptemp;
	//&p1++; p2+ ；//引用的本质是一个常指针
	cout << p1 << *p2;
}
/*引用做左值*/
//int & result(int a)
//{
//	int temp = 12;
//	a = temp;
//	return &a;
//}
//void cute()
//{
//	int a = 1121;
//	//result() = 100;//引用做左值
//	int xx = result(a);
//	cout << a;
//}

/*常引用只读*/
void strongCute()
{
	int temp = 45;
	const int &a = temp;
	//int &a = temp; //const修饰的变量不能更改
	//temp = 20;
	const int &b = 20;//字面量20,编译器分配空间 
	cout << a << b;
}

/*判断两圆相交的类*/

void main()
{
	//cout << Namespace1::a;
	//clip();
	//cute();
	//strongCute();
	mycircle1 cc;
	int p = 10;
	cc.centerx = &p;
	cc.centery = &p;
	cc.result();
	system("pause");
}
 