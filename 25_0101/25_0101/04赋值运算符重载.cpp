#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



class person
{
public:
	int *m_A;

	person(int a)
	{
		m_A = new int(a);
	}

	~person()
	{
		if (m_A != NULL)
		{
			delete m_A;
			m_A = NULL;
		}
	}

	person& operator=(person& p)
	{
		if (m_A != NULL)					// 如果地址不是空，那就先将他释放
		{
			delete m_A;
			m_A = NULL;
		}


		m_A = new int(*p.m_A);				// 重新给他开辟一块堆空间，触发深拷贝

		return *this;
	}



};

int main4()
{
	person p1(18);
	person p2(20);
	person p3(100);

	p3 = p2 = p1;

	cout << *p1.m_A << endl;
	cout << *p2.m_A << endl;
	cout << *p3.m_A << endl;

	return 0;
}