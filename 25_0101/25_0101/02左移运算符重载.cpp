#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



class person
{
	friend ostream& operator<<(ostream& cout, person& p);			// ��Ա��������˽������

public:

	void set(int a, int b)											// ��Ϊ����Ա��������˽��Ȩ���У�����дһ���ӿ������и�ֵ
	{
		m_A = a;
		m_B = b;
	}

private:

	int m_A;
	int m_B;

};


ostream& operator<<(ostream& cout, person& p)						// ���������������ӡһ�����ȫ����Ա����
{																	// ʵ������Զ������������
	cout << p.m_A  << " " << p.m_B << endl;
	return cout;
}																	// ���������ж����Ա��������Ϊ�����Ļ��ͱ�Ϊp cout��˳����


int main2()
{
	person p;
	p.set(10, 10);
	operator<<(cout, p);

	return 0;
}