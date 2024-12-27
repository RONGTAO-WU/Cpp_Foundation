#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Cube
{
public:

	void setL(int l)			
	{
		m_L = l;
	}
	
	int getL()
	{
		return m_L;
	}

	void setW(int w)
	{
		m_W = w;
	}

	int getW()
	{
		return m_W;
	}

	void setH(int h)
	{
		m_H = h;
	}

	int getH()
	{
		return m_H;
	}


	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
	}

	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	bool issameByclass(Cube &c)				// ��Ա�����жϴ�������Բ�Ƿ������е�Բ���
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			return true;
		}
		return false;
	}

private:
	int m_L;
	int m_W;
	int m_H;
};



bool issame(Cube &c1 , Cube&c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}



int main()
{
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "����������Ϊ��" << c1.calculateS() << endl;
	cout << "����������Ϊ��" << c1.calculateV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	int ret = issame(c1, c2);
	if (ret)
	{
		cout << "����������ȵ�" << endl;;
	}
	else
		cout << "�����岻����ȵ�" << endl;



	int ret2 = c1.issameByclass(c2);
	if (ret2)
	{
		cout << "��Ա�����жϣ�����������ȵ�" << endl;;
	}
	else
		cout << "��Ա�����жϣ������岻����ȵ�" << endl;


	return 0;
}