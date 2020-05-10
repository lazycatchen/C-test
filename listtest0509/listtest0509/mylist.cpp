#include"head.h"

/*���Ա��ʼ��*/
Status init_mylist(mylist &L)
{
	//L.p =new  int[initsize];
	L.p = (int*)malloc(initsize*sizeof(int));
	if (!L.p)exit(OVERFLOW);
	L.length = initsize;
	L.listsize = 0;
	cout << "Init element" << endl  ;
	return 1;
}

/*���Ա�����*/
Status insert_mylist(mylist &L, int i, int e)
{
	if (i<1 || i>L.length + 1)return 0;
	int *newbase=NULL;
	if (L.length > L.listsize) {
		newbase = (int*)realloc(L.p, (L.listsize+ sizeincrease)*initsize*sizeof(int));//���·����ڴ�,ע���Ƕ�p���·���
		if (!newbase)exit(OVERFLOW);
	}
	L.p = newbase;
	L.listsize += sizeincrease;
	int *q; int *d;//qΪ����Ԫ��ָ�룬dΪ����ָ��
	q = &L.p[i - 1];
	for (d = &L.p[L.length - 1]; d > q; d--)//Ϊ�����е�Ԫ�غ��ƣ�Ӧ�ôӺ���ǰ��������Ԫ��
		*(q + 1) = *q;
	*q = e;
	++L.length;
	cout << "Insert element" << endl;
	return 1;
}

/*���Ա�ɾ��*/
Status dete_mylist(mylist &L, int i)
{
	if (i<1 || i>L.length + 1)return 0;
	int *q; int *d;//qΪɾ��Ԫ��ָ�룬dΪ����ָ��
	q = &L.p[i - 1];
	for (d = &L.p[i - 1]; d <&L.p[L.length-1]; d++)//Ϊ�����е�Ԫ�غ��ƣ�Ӧ�ôӺ���ǰ��������Ԫ��
		*q = *(q+1);
	--L.length;
	return 1;
	cout << "delete element"<<endl;
}

/*���Ա�ı�*/
Status change_mylist(mylist &L, int i,int e)
{
	if (i<1 || i>L.length + 1)return 0;
	L.p[i - 1] = e;
	return 1;
	cout << "change element" << endl;
}

/*���Ա�����*/
int serch_mylist(mylist &L,int e)
{
	int *d; int index = 0;
	for (d = &L.p[0]; d < &L.p[L.length - 1]; d++, ++index)
	{
		if (*d == e)
			return index+1;
	}
	
	cout << "change element" << endl;
	return 1;
}