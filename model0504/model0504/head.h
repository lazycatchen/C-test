
#pragma once
#include<iostream>
using namespace std;
template <typename T>
class father
{
public:
	father(T t)
	{
		cout << "模板构造：" << t << endl;
	}
	virtual ~father()
	{
		cout << "模板析构："  << endl;
	}
};

class child:public father<int>
{
public:
	child(int t):father<int>(t)
	{
		cout << "子类模板构造：" << t << endl;
	}
	virtual ~child()
	{
		cout << "子类模板析构：" << endl;
	}
};