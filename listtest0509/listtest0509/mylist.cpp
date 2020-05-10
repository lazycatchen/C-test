#include"head.h"

/*线性表初始化*/
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

/*线性表新增*/
Status insert_mylist(mylist &L, int i, int e)
{
	if (i<1 || i>L.length + 1)return 0;
	int *newbase=NULL;
	if (L.length > L.listsize) {
		newbase = (int*)realloc(L.p, (L.listsize+ sizeincrease)*initsize*sizeof(int));//重新分配内存,注意是对p重新分配
		if (!newbase)exit(OVERFLOW);
	}
	L.p = newbase;
	L.listsize += sizeincrease;
	int *q; int *d;//q为插入元素指针，d为门卫指针
	q = &L.p[i - 1];
	for (d = &L.p[L.length - 1]; d > q; d--)//为了所有的元素后移，应该从后向前遍历后移元素
		*(q + 1) = *q;
	*q = e;
	++L.length;
	cout << "Insert element" << endl;
	return 1;
}

/*线性表删除*/
Status dete_mylist(mylist &L, int i)
{
	if (i<1 || i>L.length + 1)return 0;
	int *q; int *d;//q为删除元素指针，d为门卫指针
	q = &L.p[i - 1];
	for (d = &L.p[i - 1]; d <&L.p[L.length-1]; d++)//为了所有的元素后移，应该从后向前遍历后移元素
		*q = *(q+1);
	--L.length;
	return 1;
	cout << "delete element"<<endl;
}

/*线性表改变*/
Status change_mylist(mylist &L, int i,int e)
{
	if (i<1 || i>L.length + 1)return 0;
	L.p[i - 1] = e;
	return 1;
	cout << "change element" << endl;
}

/*线性表搜索*/
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