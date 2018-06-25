// this.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CDemo
{
	int id; //默认为private
public:
	CDemo(int i)
	{
		id = i;
		cout << "id=" << id << " constructed" << endl;
	}
	~CDemo() //~表达析构函数，就是像开死亡证明一样
	{
		cout << "id=" << id << " destructed" << endl;
	}
	void haha()
	{
		cout << "id=" << id << " haha" << endl;
	}
	CDemo & display() //引用（&)的话生成不了无名对象
	{
		cout << "id=" << id << " hello" << endl;
		return *this; //this当前对象指针,return *this!=return d4,this=&d4
	}
};
CDemo d1(1);//全局变量,最先运行最后销毁
void Func()
{
	static CDemo d2(2);//静态变量
	CDemo d3(3);
	cout << "func" << endl;
}
int main()
{
	CDemo d4(4);
	d4.display().haha(); //先运行display再运行haha
	return 0;
}
//this 不能用在主函数，只能用在类

