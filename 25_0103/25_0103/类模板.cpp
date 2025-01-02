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
		cout << "姓名：" << _name << endl << "年龄：" << _age << endl;
	}

};

template<typename T1, typename T2 = int>			// 类模板中可以有默认参数

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
		cout << "姓名：" << _name << endl << "年龄：" << _age << endl;
	}

};

int main()
{
	person1<string,int> p1("孙悟空",1000);
	p1.showperson();

	person2<string>p2("猪八戒",1000);
	p2.showperson();


	return 0;
}
