#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_A + m_B;
		}else
			if (oper == "-")
			{
				return m_A - m_B;
			}
			else
				if (oper == "*")
				{
					return m_A * m_B;
				}
				else
					if (oper == "/")
					{
						return m_A / m_B;
					}
	}

	int m_A;
	int m_B;
};


int main()
{
	calculator p;
	p.m_A = 10;
	p.m_B = 10;

	cout << p.m_A << " + " << p.m_B << " = " << p.getResult("+") << endl;
	cout << p.m_A << " - " << p.m_B << " = " << p.getResult("-") << endl;
	cout << p.m_A << " * " << p.m_B << " = " << p.getResult("*") << endl;
	cout << p.m_A << " / " << p.m_B << " = " << p.getResult("/") << endl;



	return 0;
}