#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class AbstractDrinking
{
public:

	// ��ˮ
	virtual void boil() = 0;

	// ����
	virtual void Brew() = 0;

	// ���뱭��
	virtual void pourIncup() = 0;

	// ���븨��
	virtual void putSomething() = 0;

	//������Ʒ
	void makeprink()
	{
		boil();
		Brew();
		pourIncup();
		putSomething();
	}

};

class coffee :public AbstractDrinking
{
public:

	// ���Ȫˮ
	virtual void boil()
	{
		cout << "���Ȫˮ" << endl;
	}

	// ���ݿ���
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}

	// ���뱭��
	virtual void pourIncup()
	{
		cout << "���뱭��" << endl;
	}

	// ���뿧��+ţ��
	virtual void putSomething()
	{
		cout << "���뿧��+ţ��" << endl;
	}

};

class Tea :public AbstractDrinking
{
public:

	// �󴿾�ˮ
	virtual void boil()
	{
		cout << "�󴿾�ˮ" << endl;
	}

	// ���ݲ�ˮ
	virtual void Brew()
	{
		cout << "���ݲ�ˮ" << endl;
	}

	// ���뱭��
	virtual void pourIncup()
	{
		cout << "���뱭��" << endl;
	}

	// �������
	virtual void putSomething()
	{
		cout << "�������" << endl;
	}
};

void test(AbstractDrinking * a)
{
	a->makeprink();
	delete a;
}

int main1()
{

	test(new coffee);
	cout << "-----------------------" << endl;
	test(new Tea);

	return 0;
}