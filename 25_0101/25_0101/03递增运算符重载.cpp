#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



class person
{
	friend ostream& operator<<(ostream& cout, person p);

public:

	
	person& operator++()				// ǰ��++
	{

		m_A++;

		return *this;
	}

	person operator++(int)				// ����++		intΪռλ��������ǰ��++�ͺ���++
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
	
	cout << ++(++p) << endl;							// ǰ�÷��ص������ã����÷��ص���ֵ

	cout << (p++)++ << endl;



	return 0;
}