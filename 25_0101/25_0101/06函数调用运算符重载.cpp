#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class person
{
public:
	void operator()(string a)
	{
		cout << a << endl;
	}
};

void print(string a)
{
	cout << a << endl;
}

int main()
{
	person p;

	p("abcd");						// 类似于函数调用的方式传参打印
	print("acbd");

	return 0;
}