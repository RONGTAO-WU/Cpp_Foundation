#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>


// ��ͨ��ʽʵ�ּ�����


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



// ��̬��ʽʵ�ּ�����



class Abstractcalculator
{
public:

	virtual int getResult()					// ������д��ʽ,�����ǻᷢ���������ĺ������������
	{										// ���ǿ��Խ�����麯��дΪ���麯������virtual int getResult() = 0
		return 0;							// ���������һ���麯������������ǽг�����
	}										// ��������ص㣺1.�޷�ʵ��������
											//					2.���������д�������еĴ��麯��������Ҳ���ڳ�����
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