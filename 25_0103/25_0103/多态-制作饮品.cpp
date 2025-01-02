#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class AbstractDrinking
{
public:

	// 煮水
	virtual void boil() = 0;

	// 冲泡
	virtual void Brew() = 0;

	// 倒入杯中
	virtual void pourIncup() = 0;

	// 加入辅料
	virtual void putSomething() = 0;

	//制作饮品
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

	// 煮矿泉水
	virtual void boil()
	{
		cout << "煮矿泉水" << endl;
	}

	// 冲泡咖啡
	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	// 倒入杯中
	virtual void pourIncup()
	{
		cout << "倒入杯中" << endl;
	}

	// 加入咖啡+牛奶
	virtual void putSomething()
	{
		cout << "加入咖啡+牛奶" << endl;
	}

};

class Tea :public AbstractDrinking
{
public:

	// 煮纯净水
	virtual void boil()
	{
		cout << "煮纯净水" << endl;
	}

	// 冲泡茶水
	virtual void Brew()
	{
		cout << "冲泡茶水" << endl;
	}

	// 倒入杯中
	virtual void pourIncup()
	{
		cout << "倒入杯中" << endl;
	}

	// 加入枸杞
	virtual void putSomething()
	{
		cout << "加入枸杞" << endl;
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