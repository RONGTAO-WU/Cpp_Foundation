#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



class person
{
	friend ostream& operator<<(ostream& cout, person& p);			// 友员用来访问私有数据

public:

	void set(int a, int b)											// 因为将成员变量放在私有权限中，我们写一个接口来进行赋值
	{
		m_A = a;
		m_B = b;
	}

private:

	int m_A;
	int m_B;

};


ostream& operator<<(ostream& cout, person& p)						// 左移运算符用来打印一个类的全部成员变量
{																	// 实现输出自定义的数据类型
	cout << p.m_A  << " " << p.m_B << endl;
	return cout;
}																	// 不能在类中定义成员函数，因为这样的话就变为p cout的顺序了


int main2()
{
	person p;
	p.set(10, 10);
	operator<<(cout, p);

	return 0;
}