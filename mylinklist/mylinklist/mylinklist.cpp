#include"head.h"

/*�������Ԫ��*/
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

//int GetElem(mylinklist1 L, int i, int &e)  //LΪ��ͷ���ĵ������ͷָ��
//{
//	
//	mylinklist1 *p;
//	p = L.next;
//	int j = 0;      //��ʼ��pָ���һ����㣬jΪ������
//	while (p&&j < i)    //˳ָ�������ң�ֱ��pָ���i��Ԫ�ػ�pΪ��
//	{
//		p = p->next;
//		++j;
//	}
//	if (!p || j>i)
//		return ERROR;
//	e = p->data;     //ȡ��i��Ԫ��
//	return OK;
//
//}
