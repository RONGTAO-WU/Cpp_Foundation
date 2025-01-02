#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


// 普通方式实现计算器


//class calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_A + m_B;
//		}else
//			if (oper == "-")
//			{
//				return m_A - m_B;
//			}
//			else
//				if (oper == "*")
//				{
//					return m_A * m_B;
//				}
//				else
//					if (oper == "/")
//					{
//						return m_A / m_B;
//					}
//	}
//
//	int m_A;
//	int m_B;
//};
//
//
//int main()
//{
//	calculator p;
//	p.m_A = 10;
//	p.m_B = 10;
//
//	cout << p.m_A << " + " << p.m_B << " = " << p.getResult("+") << endl;
//	cout << p.m_A << " - " << p.m_B << " = " << p.getResult("-") << endl;
//	cout << p.m_A << " * " << p.m_B << " = " << p.getResult("*") << endl;
//	cout << p.m_A << " / " << p.m_B << " = " << p.getResult("/") << endl;
//
//
//
//	return 0;
//}



// 多态方式实现计算器



class Abstractcalculator
{
public:

	virtual int getResult()					// 满足重写格式,但我们会发现这个基类的函数是无意义的
	{										// 我们可以将这个虚函数写为纯虚函数，即virtual int getResult() = 0
		return 0;							// 这个类中有一个虚函数，这个类我们叫抽象类
	}										// 抽象类的特点：1.无法实例化对象
											//					2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
	int m_A;
	int m_B;

};

class Add:public Abstractcalculator
{
public:
	int getResult()
	{
		return m_A + m_B;
	}
};

class Sub :public Abstractcalculator
{
public:
	int getResult()
	{
		return m_A - m_B;
	}
};

class Mul :public Abstractcalculator
{
public:
	int getResult()
	{
		return m_A * m_B;
	}
};

class Div :public Abstractcalculator
{
public:
	int getResult()
	{
		return m_A / m_B;
	}
};

int main()
{
	Abstractcalculator* abc = new Add;
	abc->m_A = 10;
	abc->m_B = 10;

	cout << abc->m_A << " + " << abc->m_B << " = " << abc->getResult() << endl;
	delete abc;

	abc = new Sub;
	abc->m_A = 10;
	abc->m_B = 10;

	cout << abc->m_A << " - " << abc->m_B << " = " << abc->getResult() << endl;
	delete abc;

	abc = new Mul;
	abc->m_A = 10;
	abc->m_B = 10;

	cout << abc->m_A << " * " << abc->m_B << " = " << abc->getResult() << endl;
	delete abc;

	abc= new Div;
	abc->m_A = 10;
	abc->m_B = 10;

	cout << abc->m_A << " / " << abc->m_B << " = " << abc->getResult() << endl;
	delete abc;


	return 0;
}