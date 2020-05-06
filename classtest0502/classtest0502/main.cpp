/*2020.5.2  构造函数、析构函数、析构顺序
*/
#include <stdlib.h>
#include"head.h"
using namespace std;

/*拷贝构造函数、重载=*/
void struct1()
{
	father father1;
	father father2(10, 20);
	father1 = father2;  //赋值和初始化不一样，赋值需要重载=
	father father3(father2);//初始化需要拷贝构造函数进行了
	father father4 = father2;
}

/*构造析构顺序、父类指针指向子类对象、作用域分别符区分同名变量*/
void struct2()
{
	//father xmf;
	//father *p=&xmf;
	child1 xm;
	father *p1 = &xm;//父类指针指向子类对象
	p1->print();
	xm.print();

	cout << xm.father::temp;//作用域分别符区分同名变量
	cout << xm.temp;
}
int main()
{
	//struct1();
	struct2();
	system("pause");
	return 0;
}