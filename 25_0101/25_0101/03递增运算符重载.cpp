#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



class person
{
	friend ostream& operator<<(ostream& cout, person p);

public:

	
	person& operator++()				// 前置++
	{

		m_A++;

		return *this;
	}

	person operator++(int)				// 后置++		int为占位参数区分前置++和后置++
	{
		person temp;
		temp = *this;
		temp.m_A++;
		return temp;
	}


private:

	int m_A = 1;
};


ostream& operator<<(ostream& cout, person p)
{
	cout << p.m_A ;
	return cout;
}


int main3()
{
	person p;
	
	cout << ++(++p) << endl;							// 前置返回的是引用，后置返回的是值

	cout << (p++)++ << endl;



	return 0;
}