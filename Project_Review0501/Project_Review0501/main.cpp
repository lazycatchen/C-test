#include<iostream>
#include"head01.h"
//2020.5.1 ��ϰnamespace��c++ const��䡢���ñ��ʡ�������ֻ��
using namespace std;
/*const���ϣ���ֵ�Ҷ���*/
void constTest()
{
	int temp = 2;
	int changetemp = 3;
	int* const p1 = &temp;
	const int * p2 = &changetemp;//const���ϣ���ֵ�Ҷ���
	changetemp = 3l;
	cout << *p1 << *p2;
}
/*���õı�����һ����ָ��*/
void clip()
{
	int cliptemp = 10;
	int& p1 = cliptemp;
	int * const p2 = &cliptemp;
	//&p1++; p2+ ��//���õı�����һ����ָ��
	cout << p1 << *p2;
}
/*��������ֵ*/
//int & result(int a)
//{
//	int temp = 12;
//	a = temp;
//	return &a;
//}
//void cute()
//{
//	int a = 1121;
//	//result() = 100;//��������ֵ
//	int xx = result(a);
//	cout << a;
//}

/*������ֻ��*/
void strongCute()
{
	int temp = 45;
	const int &a = temp;
	//int &a = temp; //const���εı������ܸ���
	//temp = 20;
	const int &b = 20;//������20,����������ռ� 
	cout << a << b;
}

/*�ж���Բ�ཻ����*/

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
 