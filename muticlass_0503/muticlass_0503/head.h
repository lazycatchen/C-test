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
		cout << "Ĭ�Ϲ���" << endl;
	}
	father(int A, int B)
	{
		*color = A + 1;
		*shape = B + 1;
		cout << "���ι���" << *color << *shape << endl;
	}
	father(const father &obj) //���ƹ��캯��
	{
		*color = *obj.color * 10;
		*shape = *obj.shape * 10;
		cout << "��ֵ����" << *color << *shape << endl;
	}
	void operator=(father &obj)//����=������
	{
		cout << "����=" << endl;
		int temp = 10086;
		*color = *obj.color;
		*shape = *obj.shape;
	}
	virtual ~father()
	{
		delete color;
		delete shape;
		cout << "��������" << endl;
	}

	void print()
	{
		cout << "��ӡ" << endl;
	}
	virtual void virprint()
	{
		cout << "�����麯��" << endl;
	}
	
};

class child1 :public father
{
public:
	int  temp = 103;
public:
	child1()
	{
		cout << "�����޲ι��캯��" << endl;
	}
	virtual ~child1()
	{
		cout << "������������" << endl;
	}

	void print2()
	{
		cout << "��ӡx" << endl;
	}
	virtual void virprint()
	{
		cout << "�麯����д" << endl;
	}

};