
/*2020.05.03  �麯����д���������������ص�����*/
#include<iostream>
#include"head.h"
using namespace std;
/*�麯����д������������*/
void struct1()
{
	//father xmf;
	//father *p=&xmf;
	child1 xm;
	father *p1 = &xm;
	p1->print();   //����ָ��ָ���������,��ͨ�ض���ֻ�ܷ��ʸ��ຬ�еĳ�Ա����
	p1->virprint();//����ָ��ָ���������,�麯����д�ܷ��ʸ��ຬ�еĳ�Ա����
	delete p1;//����������
}

/*����ָ�롢�ص�����*/
void callback(int &a)
{
	int temp = a;
	
	cout << "call back" <<temp<< endl;
}
void addcallback(void(*p)(int &a))//�ص�����ʵ�ָ���ԭ����
{
	int px = 233;
	(*p)(px);
}
void call()
{
	void (*p)(int &a) = &callback;//����ָ��
	addcallback(p);//�ص�����
}

int main()
{
	//struct1();
	call();
	
	system("pause");
	return 0;

}