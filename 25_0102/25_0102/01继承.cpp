#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

class Bypass											// 基类（父类）:表现其共性						// 继承：可以减少重复代码
{
public:
	void header()
	{
		cout << "首页，公开课，登录，注册...（公共头部）" << endl;
	}

	void footer()
	{
		cout << "帮助中心，交流合作，站内地图...(公共底部)" << endl;
	}

	void left()
	{
		cout << "Jave,Python,C++...(公共分类列表)" << endl;
	}
};

class Java : public Bypass								// 派生类（子类）：表现其个性
{

public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}

};

class Python : public Bypass
{

public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}

};

class Cpp : public Bypass
{

public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}

};

int main1()
{
	Java Java;
	Python Python;
	Cpp Cpp;

	cout << "视频下载中心：" << endl;
	Java.header();
	Java.left();
	Java.content();
	Java.footer();

	cout << "----------------------------" << endl;


	cout << "视频下载中心：" << endl;
	Python.header();
	Python.left();
	Python.content();
	Python.footer();

	cout << "----------------------------" << endl;
	

	cout << "视频下载中心：" << endl;
	Cpp.header();
	Cpp.left();
	Cpp.content();
	Cpp.footer();

	cout << "----------------------------" << endl;

	return 0;
}
