/*2020.5.10 ������롢��ʾ*/
#include"head.h"
void myllist()
{
	myllink list;
	list=new(mylinklist1);//��Ҫ�����ڴ棡��������Ҫ��new��struct����
	list->data = 10;
	list->next = NULL;
	//myllink mylinklistx=NULL;
	//mylinklistx->data = 10;
	//mylinklistx->next = NULL;
	insert_linklisk(list, 1, 11);
	insert_linklisk(list, 2, 22);
	search_linklisk(list, 2);
}
int main()
{
	myllist();
	system("pause");
	return 0;
}