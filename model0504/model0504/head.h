
#pragma once
#include<iostream>
using namespace std;
template <typename T>
class father
{
public:
	father(T t)
	{
		cout << "ģ�幹�죺" << t << endl;
	}
	virtual ~father()
	{
		cout << "ģ��������"  << endl;
	}
};

class child:public father<int>
{
public:
	child(int t):father<int>(t)
	{
		cout << "����ģ�幹�죺" << t << endl;
	}
	virtual ~child()
	{
		cout << "����ģ��������" << endl;
	}
};