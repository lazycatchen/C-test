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
	mylinklist1 * next=NULL;//struct��д��c������c++��һ�����ṹָ�벻��Ҫ��struct 
}mylinklist1,*myllink;

//int GetElem(mylinklist1 L, int i, int &e); //LΪ��ͷ���ĵ������ͷָ��
Status insert_linklisk(myllink &L, int i, int ele);
Status search_linklisk(myllink &L, int i);
