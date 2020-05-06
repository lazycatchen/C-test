#pragma once
#include<iostream>
using namespace std;
namespace Namespace1
{
	int a = 0;
}
class mycircle1
{
public:
	  int *centerx = new int();
	  int *centery = new int();
	  int *r = new int();
	  int x = 10;
	  //mycircle1();
public:
	  void result();
	  int distance();
	  
};

void mycircle1::result ()
{
	int temp = 0;
	int *x = centerx;
	int *y = centery;
	temp = (*x)*(*y);
	cout << temp;
}
int mycircle1::distance()
{
	*r = 5;
	return *r;
}
