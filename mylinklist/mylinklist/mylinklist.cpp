#include"head.h"

/*链表插入元素*/
Status insert_linklisk(myllink &L, int i, int ele)
{
	
	
	myllink copyL;
	copyL = L;
	int j = 0;
	while (copyL&&j < i - 1)
	{
		j++;
		copyL = copyL->next;
	};
	if (!copyL || i < 1)return ERROR;
	myllink s;
	s = (myllink) malloc (sizeof(mylinklist1));
	s->data = ele;
	s->next = copyL->next;
	copyL->next = s;
	cout << "insert elem" << endl;
	return OK;
}

Status search_linklisk(myllink &L, int i)
{
	if (!L || i < 1)return ERROR;
	cout << L->next->data;
	return OK;
}

//int GetElem(mylinklist1 L, int i, int &e)  //L为带头结点的单链表的头指针
//{
//	
//	mylinklist1 *p;
//	p = L.next;
//	int j = 0;      //初始化p指点第一个结点，j为计数器
//	while (p&&j < i)    //顺指针向后查找，直到p指向第i个元素或p为空
//	{
//		p = p->next;
//		++j;
//	}
//	if (!p || j>i)
//		return ERROR;
//	e = p->data;     //取第i个元素
//	return OK;
//
//}
