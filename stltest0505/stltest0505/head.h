
#pragma once
using namespace std;
class  father
{
public:
	int temp;
	father(int &a)
	{
		this->temp = a;
	}
	~father()
	{}

	void oper(int &resu)
	{
		int re = this->temp + resu;
		cout << re;
	}
};
