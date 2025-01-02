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

	// �ṩ����
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

	// ����ָ����ýӿ�
	void work()
	{
		m_Cpu->calculate();
		m_VideCade->display();
		m_Memory->storage();
	}

private:

	Cpu* m_Cpu;							// ���ǻ���ָ��
	VideCade* m_VideCade;
	Memory* m_Memory;

};




// ������

class IntelCpu:public Cpu
{
public:
	void calculate()
	{
		cout << "IntelCPU���ڹ�����" << endl;
	}
};

class IntelVideCade :public VideCade
{
public:
	void display()
	{
		cout << "Intel�Կ����ڹ�����" << endl;
	}
};

class IntelMemory :public Memory
{
public:
	void storage()
	{
		cout << "Intel�ڴ������ڹ�����" << endl;
	}
};



class LenovoCPU :public Cpu
{
public:
	void calculate()
	{
		cout << "LenovoCPU���ڹ�����" << endl;
	}
};

class LenovoVideCade :public VideCade
{
public:
	void display()
	{
		cout << "Lenovo�Կ����ڹ�����" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenovo�ڴ������ڹ�����" << endl;
	}
};




int main2()
{
	// ��һ̨�������
	Cpu* a = new IntelCpu;
	VideCade* b = new IntelVideCade;
	Memory* c = new IntelMemory;

	// ������һ̨����
	Computer* Computer1 = new Computer(a, b, c);
	Computer1->work();
	delete Computer1;

	cout << "------------------------" << endl;

	Computer* Computer2 = new Computer(new LenovoCPU, new LenovoVideCade, new LenovoMemory);			// ����ֱ��new��������
	Computer2->work();
	delete Computer2;

	cout << "------------------------" << endl;

	Computer* Computer3 = new Computer(new LenovoCPU, new IntelVideCade, new LenovoMemory);
	Computer3->work();
	delete Computer3;

	return 0;
}
