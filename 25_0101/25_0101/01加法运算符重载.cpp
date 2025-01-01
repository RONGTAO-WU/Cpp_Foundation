#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class person
{

public:

	//person operator+(person& p)							// 局部下重载+号
	//{
	//	person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}

	int m_A;
	int m_B;

};

person operator+(person& p1, person& p2)					// 全局下重载+号
{
	person ret;
	ret.m_A = p1.m_A + p2.m_A;
	ret.m_B = p1.m_B + p2.m_B;
	return ret;
}


person operator-(person& p, int num)						// 运算符重载也可以进行函数重载，这里我们让一个类减一个整数
{
	person ret;
	int a = 10;
	ret.m_A = p.m_A + num;
	ret.m_B = p.m_B + num;
	return ret;
}

int main0()
{

	person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	person p2;
	p2.m_A = 100;
	p2.m_B = 200;

	person p3;
	p3 = p1 + p2;											// p3 = p1.operator+(p2);		p3 = operator+(p1,p2);

	cout << p3.m_A << endl;
	cout << p3.m_B << endl;



	return 0;
}
