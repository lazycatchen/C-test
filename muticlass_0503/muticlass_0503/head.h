#pragma once
#include<iostream>
using namespace std;

class father
{
public:
	int *color = new int;
	int *shape = new int;
	int  temp = 1;
public:
	father()
	{
		cout << "默认构造" << endl;
	}
	father(int A, int B)
	{
		*color = A + 1;
		*shape = B + 1;
		cout << "含参构造" << *color << *shape << endl;
	}
	father(const father &obj) //复制构造函数
	{
		*color = *obj.color * 10;
		*shape = *obj.shape * 10;
		cout << "赋值构造" << *color << *shape << endl;
	}
	void operator=(father &obj)//重载=操作符
	{
		cout << "重载=" << endl;
		int temp = 10086;
		*color = *obj.color;
		*shape = *obj.shape;
	}
	virtual ~father()
	{
		delete color;
		delete shape;
		cout << "析构函数" << endl;
	}

	void print()
	{
		cout << "打印" << endl;
	}
	virtual void virprint()
	{
		cout << "父类虚函数" << endl;
	}
	
};

class child1 :public father
{
public:
	int  temp = 103;
public:
	child1()
	{
		cout << "子类无参构造函数" << endl;
	}
	virtual ~child1()
	{
		cout << "子类析构函数" << endl;
	}

	void print2()
	{
		cout << "打印x" << endl;
	}
	virtual void virprint()
	{
		cout << "虚函数重写" << endl;
	}

};