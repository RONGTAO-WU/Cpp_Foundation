#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class Bypass											// ���ࣨ���ࣩ:�����乲��						// �̳У����Լ����ظ�����
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע��...������ͷ����" << endl;
	}

	void footer()
	{
		cout << "�������ģ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}

	void left()
	{
		cout << "Jave,Python,C++...(���������б�)" << endl;
	}
};

class Java : public Bypass								// �����ࣨ���ࣩ�����������
{

public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}

};

class Python : public Bypass
{

public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}

};

class Cpp : public Bypass
{

public:
	void content()
	{
		cout << "C++ѧ����Ƶ" << endl;
	}

};

int main1()
{
	Java Java;
	Python Python;
	Cpp Cpp;

	cout << "��Ƶ�������ģ�" << endl;
	Java.header();
	Java.left();
	Java.content();
	Java.footer();

	cout << "----------------------------" << endl;


	cout << "��Ƶ�������ģ�" << endl;
	Python.header();
	Python.left();
	Python.content();
	Python.footer();

	cout << "----------------------------" << endl;
	

	cout << "��Ƶ�������ģ�" << endl;
	Cpp.header();
	Cpp.left();
	Cpp.content();
	Cpp.footer();

	cout << "----------------------------" << endl;

	return 0;
}
