#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Cpu
{
public:
	virtual void calculate() = 0;
};

class VideCade
{
public:
	virtual void display() = 0;
};

class Memory
{
public:
	virtual void storage() = 0;
};



class Computer
{
public:

	Computer(Cpu* cpu, VideCade* vc, Memory* mem)
	{
		m_Cpu = cpu;
		m_VideCade = vc;
		m_Memory = mem;
	}

	// 提供析构
	~Computer()
	{
		if (m_Cpu != NULL)
		{
			delete m_Cpu;
			m_Cpu = NULL;
		}

		if (m_VideCade != NULL)
		{
			delete m_VideCade;
			m_VideCade = NULL;
		}

		if (m_Memory != NULL)
		{
			delete m_Memory;
			m_Memory = NULL;
		}
	}

	// 基类指针调用接口
	void work()
	{
		m_Cpu->calculate();
		m_VideCade->display();
		m_Memory->storage();
	}

private:

	Cpu* m_Cpu;							// 都是基类指针
	VideCade* m_VideCade;
	Memory* m_Memory;

};




// 各厂商

class IntelCpu:public Cpu
{
public:
	void calculate()
	{
		cout << "IntelCPU正在工作！" << endl;
	}
};

class IntelVideCade :public VideCade
{
public:
	void display()
	{
		cout << "Intel显卡正在工作！" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	void storage()
	{
		cout << "Intel内存条正在工作！" << endl;
	}
};



class LenovoCPU :public Cpu
{
public:
	void calculate()
	{
		cout << "LenovoCPU正在工作！" << endl;
	}
};

class LenovoVideCade :public VideCade
{
public:
	void display()
	{
		cout << "Lenovo显卡正在工作！" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenovo内存条正在工作！" << endl;
	}
};




int main2()
{
	// 第一台电脑零件
	Cpu* a = new IntelCpu;
	VideCade* b = new IntelVideCade;
	Memory* c = new IntelMemory;

	// 创建第一台电脑
	Computer* Computer1 = new Computer(a, b, c);
	Computer1->work();
	delete Computer1;

	cout << "------------------------" << endl;

	Computer* Computer2 = new Computer(new LenovoCPU, new LenovoVideCade, new LenovoMemory);			// 可以直接new到括号里
	Computer2->work();
	delete Computer2;

	cout << "------------------------" << endl;

	Computer* Computer3 = new Computer(new LenovoCPU, new IntelVideCade, new LenovoMemory);
	Computer3->work();
	delete Computer3;

	return 0;
}
