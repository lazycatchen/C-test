#pragma once
#include<iostream>
#include<math.h>
using namespace std;
typedef int Status;
#define initsize 100
#define sizeincrease 10  //宏定义不需要加分号
typedef struct 
{
	int *p;
	int length;
	int listsize;
}mylist;

Status init_mylist (mylist &L);
Status insert_mylist(mylist &L, int i, int e);
Status dete_mylist(mylist &L, int i);
Status change_mylist(mylist &L, int i, int e);
int serch_mylist(mylist &L, int e);