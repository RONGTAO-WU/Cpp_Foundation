#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Aniaml
{
public:
	
	virtual void speak()					// ����ǰ�����virtual,���麯����ʹ�����溯������ʱ��󶨵�ַ�������Ϳ��Ը��ݴ�����ȷ������������ĺ���
	{
		cout << "������˵��" << endl;

	}
};

class cat: public Aniaml
{
public:

	void speak()							// ������д
	{
		cout << "Сè��˵��" << endl;

	}
};

class dog :public Aniaml
{
public:

	void speak()
	{
		cout << "С����˵��" << endl;

	}
};

void dospeak(Aniaml& a)					// ������õ��ǻ���
{
	a.speak();							// ��̳�������ĵ�ַ������ǰȷ����Ҫ������������ʲô�����
}


int main3()
{
	
	cat a;
	dog b;

	dospeak(a);
	dospeak(b);

	return 0;
}