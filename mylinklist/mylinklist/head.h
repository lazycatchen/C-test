#pragma once
#include<iostream>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#define  ERROR  0
#define  OK     1
using namespace std;
typedef int Status;
typedef struct mylinklist1
{
	int data=0;
	mylinklist1 * next=NULL;//struct的写法c语言与c++不一样，结构指针不需要加struct 
}mylinklist1,*myllink;

//int GetElem(mylinklist1 L, int i, int &e); //L为带头结点的单链表的头指针
Status insert_linklisk(myllink &L, int i, int ele);
Status search_linklisk(myllink &L, int i);
