/*2020.5.2  ���캯������������������˳��
*/
#include <stdlib.h>
#include"head.h"
using namespace std;

/*�������캯��������=*/
void struct1()
{
	father father1;
	father father2(10, 20);
	father1 = father2;  //��ֵ�ͳ�ʼ����һ������ֵ��Ҫ����=
	father father3(father2);//��ʼ����Ҫ�������캯��������
	father father4 = father2;
}

/*��������˳�򡢸���ָ��ָ���������������ֱ������ͬ������*/
void struct2()
{
	//father xmf;
	//father *p=&xmf;
	child1 xm;
	father *p1 = &xm;//����ָ��ָ���������
	p1->print();
	xm.print();

	cout << xm.father::temp;//������ֱ������ͬ������
	cout << xm.temp;
}
int main()
{
	//struct1();
	struct2();
	system("pause");
	return 0;
}