#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<stdbool.h>


class person
{
public:

	string m_A;
	int m_B;

	person(string a ,int b)
	{
		m_A = a;
		m_B = b;
	}


	bool operator==(person& p)
	{
		if (m_A == p.m_A && m_B == p.m_B)
		{
			return true;
		}
		return false;
	}

	bool operator!=(person& p)						// 以上面的逻辑相反
	{
		if (m_A == p.m_A && m_B == p.m_B)
		{
			return false;
		}
		return true;
	}
};

int main5()
{
	person p1("tom", 20);
	person p2("tom", 10);

	if (p1.operator==(p2))
	{
		cout << "p1 和 p2是相等的！";
	}
	else
		cout << "p1 和 p2是不相等的！";



	return 0;
}