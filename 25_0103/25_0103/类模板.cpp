#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>

template<typename T1,typename T2>

class person1
{
public:
	T1 _name;
	T2 _age;

	person1(T1 name,T2 age)
	{
		_name = name;
		_age = age;
	}

	void showperson()
	{
		cout << "������" << _name << endl << "���䣺" << _age << endl;
	}

};

template<typename T1, typename T2 = int>			// ��ģ���п�����Ĭ�ϲ���

class person2
{
public:
	T1 _name;
	T2 _age;

	person2(T1 name, T2 age)
	{
		_name = name;
		_age = age;
	}

	void showperson()
	{
		cout << "������" << _name << endl << "���䣺" << _age << endl;
	}

};

int main()
{
	person1<string,int> p1("�����",1000);
	p1.showperson();

	person2<string>p2("��˽�",1000);
	p2.showperson();


	return 0;
}
