#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Animal
{
public:
	int m_A;
};

class Sheep: virtual public Animal					// 继承前面加上virtual即虚继承，菱形继承这个变量数据只有一份
{

};

class Tuo: virtual public Animal
{

};

class SheepTuo: public Sheep, public Tuo
{

};


int main2()
{
	SheepTuo s;
	s.Sheep::m_A = 18;
	s.Tuo::m_A = 20;

	// 当两个基类有相同名字，需要加以作用域区分
	// 但我们知道这个数据只用存在一份就够了，菱形继承导致数据有两份，资源浪费
	// 可以用虚继承来解决这个问题
	cout << s.Sheep::m_A << endl;
	cout << s.Tuo::m_A << endl;

	cout << s.m_A << endl;		// 且虚继承这个数据不会出现不明确的情况，因为他只有一份
								// 但在菱形继承中SheepTuo这个类大小是12字节，一共存有3份数据		不用虚继承这个类是8字节
	


	return 0;
}