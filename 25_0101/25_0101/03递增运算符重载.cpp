#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



class person
{
	friend ostream& operator<<(ostream& cout, person p);

public:

	
	person& operator++()				// Ç°ÖÃ++
	{
		person temp;
		temp.m_A++;

		return temp;
	}

	person& operator++(int)				// ºóÖÃ++
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
	cout << p.m_A << endl;
	return cout;
}


int main()
{
	person p;
	operator<<(cout, p);
	

	cout << p++ << endl;
	cout << ++p << endl;

	return 0;
}