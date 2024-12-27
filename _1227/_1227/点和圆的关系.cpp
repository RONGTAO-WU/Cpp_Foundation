#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Point
{
public:
	void setX(int x)
	{
		m_X = x;
	}

	int getX()
	{
		return m_X;
	}

	void setY(int y)
	{
		m_Y = y;
	}

	int getY()
	{
		return m_Y;
	}

private:
	int m_X;
	int m_Y;
};



class Circle
{

public:
	void setR(int R)
	{
		m_R = R;
	}

	int getR()
	{
		return m_R;
	}

	void setCenter(Point Center)
	{
		m_Center = Center;
	}

	Point getCenter()
	{
		return m_Center;
	}
private:

	int m_R;
	Point m_Center;
};



//	�жϵ��Բ�Ĺ�ϵ
void islncircle(Circle &c,Point &p)
{
	// Բ�ĺ�Բ�ľ���
	int disance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX())
		+ (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	// �뾶
	int rDistance = c.getR() * c.getR();

	// ���ߵľ����ϵ
	if (disance == rDistance)
	{
		cout << "����Բ��" << endl;
	}
	else
		if (disance < rDistance)
		{
			cout << "����Բ��" << endl;
		}
		else
			cout << "����Բ��" << endl;
}



int main()
{
	// ����һ��Բ
	Circle c;
	c.setR(10);		// ���ð뾶
	Point p;
	p.setX(10);
	p.setY(0);
	c.setCenter(p);	// ����Բ��

	// ����һ����
	Point p1;
	p1.setX(10);
	p1.setY(10);

	Point p2;
	p2.setX(10);
	p2.setY(9);

	Point p3;
	p3.setX(10);
	p3.setY(11);

	islncircle(c, p1);
	islncircle(c, p2);
	islncircle(c, p3);


	return 0;
}