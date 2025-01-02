#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Aniaml
{
public:
	
	virtual void speak()					// 函数前面加上virtual,即虚函数，使得下面函数调用时晚绑定地址，这样就可以根据传参来确定调用派生类的函数
	{
		cout << "动物在说话" << endl;

	}
};

class cat: public Aniaml
{
public:

	void speak()							// 函数重写
	{
		cout << "小猫在说话" << endl;

	}
};

class dog :public Aniaml
{
public:

	void speak()
	{
		cout << "小狗在说话" << endl;

	}
};

void dospeak(Aniaml& a)					// 这里调用的是基类
{
	a.speak();							// 虚继承让这里的地址不能提前确定，要看传过来的是什么类对象
}


int main3()
{
	
	cat a;
	dog b;

	dospeak(a);
	dospeak(b);

	return 0;
}