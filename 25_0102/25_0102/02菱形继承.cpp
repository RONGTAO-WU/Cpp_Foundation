#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Animal
{
public:
	int m_A;
};

class Sheep: virtual public Animal					// �̳�ǰ�����virtual����̳У����μ̳������������ֻ��һ��
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

	// ��������������ͬ���֣���Ҫ��������������
	// ������֪���������ֻ�ô���һ�ݾ͹��ˣ����μ̳е������������ݣ���Դ�˷�
	// ��������̳�������������
	cout << s.Sheep::m_A << endl;
	cout << s.Tuo::m_A << endl;

	cout << s.m_A << endl;		// ����̳�������ݲ�����ֲ���ȷ���������Ϊ��ֻ��һ��
								// �������μ̳���SheepTuo������С��12�ֽڣ�һ������3������		������̳��������8�ֽ�
	


	return 0;
}