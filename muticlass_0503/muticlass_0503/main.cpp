
/*2020.05.03  虚函数重写、虚析构函数、回调函数*/
#include<iostream>
#include"head.h"
using namespace std;
/*虚函数重写、虚析构函数*/
void struct1()
{
	//father xmf;
	//father *p=&xmf;
	child1 xm;
	father *p1 = &xm;
	p1->print();   //父类指针指向子类对象,普通重定义只能访问父类含有的成员变量
	p1->virprint();//父类指针指向子类对象,虚函数重写能访问父类含有的成员变量
	delete p1;//虚析构函数
}

/*函数指针、回调函数*/
void callback(int &a)
{
	int temp = a;
	
	cout << "call back" <<temp<< endl;
}
void addcallback(void(*p)(int &a))//回调函数实现更改原函数
{
	int px = 233;
	(*p)(px);
}
void call()
{
	void (*p)(int &a) = &callback;//函数指针
	addcallback(p);//回调函数
}

int main()
{
	//struct1();
	call();
	
	system("pause");
	return 0;

}