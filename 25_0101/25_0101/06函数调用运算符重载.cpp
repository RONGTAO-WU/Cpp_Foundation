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

	p("abcd");						// �����ں������õķ�ʽ���δ�ӡ
	print("acbd");

	return 0;
}