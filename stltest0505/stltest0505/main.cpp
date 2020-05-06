/*2020.05.05  string vector stack set map≤‚ ‘°¢this÷∏’Î*/
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<set>
#include<map>
#include"head.h"
using namespace std;

/*string≤‚ ‘*/
void stringtest()
{
	string s1 = "sdasdasdfyuas";
	string s2 = "sdasdasdfyuas";
	size_t sizeindex = s1.find("da", 0);
	cout << sizeindex<< string::npos;
	//cout<<s1.compare(s2);
	//cout << s1.find("da",0)<<endl;
}

/*vector≤‚ ‘*/
void vectortest()
{
	vector<int> venum;
	venum = {3,4,45};
	vector<int>::iterator it;
	it=venum.begin();
	cout << ++*it;
	cout << venum.at(0);
}

/*stack≤‚ ‘*/
void stacktest()
{
	stack<int> intele;
	intele.push(5);
	cout << intele.top();
}
/*set≤‚ ‘*/
void settest()
{
	set<int> intele;
	intele.insert(5);
	intele.insert(2);
	intele.insert(4);
	intele.insert(3);
	set<int>::iterator it;
	for (it = intele.begin(); it != intele.end(); ++it)
	{
		cout << *it;
	}
}

/*map≤‚ ‘*/
void maptest()
{
	map<int,char> mapnum;
	mapnum.insert(pair<int, char>(5, 'x'));
	mapnum.insert(pair<int, char>(6, 'r'));
	map<int, char>::iterator it;
	it = mapnum.begin();
	cout << it->first<<it->second;
}

/*this÷∏’Î*/
void thiclass()
{
	int temp1 = 10;
	int temp2 = 50;
	father laoc(temp1);
	laoc.oper(temp2);
}
int main()
{
	//stringtest();
	//vectortest();
	//stacktest();
	//settest();
	//maptest();
	thiclass();
	system("pause");
	return 0;
}