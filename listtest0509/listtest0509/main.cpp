/*2020.05.09 线性表增删改查*/
#include<iostream>
#include"head.h"
void listtest()
{
mylist mylist1;
init_mylist(mylist1);
insert_mylist(mylist1, 1, 11);
insert_mylist(mylist1, 2, 22);
insert_mylist(mylist1, 3, 33);
cout<<mylist1.p[0] << endl;
//dete_mylist(mylist1, 1);
//change_mylist(mylist1, 1, 33);
cout << serch_mylist(mylist1, 33) << endl;
cout << mylist1.p[0] << endl;
}
int main()
{
	listtest();
	system("pause");
	return 0;
}