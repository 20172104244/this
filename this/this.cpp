// this.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CDemo
{
	int id; //Ĭ��Ϊprivate
public:
	CDemo(int i)
	{
		id = i;
		cout << "id=" << id << " constructed" << endl;
	}
	~CDemo() //~�����������������������֤��һ��
	{
		cout << "id=" << id << " destructed" << endl;
	}
	void haha()
	{
		cout << "id=" << id << " haha" << endl;
	}
	CDemo & display() //���ã�&)�Ļ����ɲ�����������
	{
		cout << "id=" << id << " hello" << endl;
		return *this; //this��ǰ����ָ��,return *this!=return d4,this=&d4
	}
};
CDemo d1(1);//ȫ�ֱ���,���������������
void Func()
{
	static CDemo d2(2);//��̬����
	CDemo d3(3);
	cout << "func" << endl;
}
int main()
{
	CDemo d4(4);
	d4.display().haha(); //������display������haha
	return 0;
}
//this ����������������ֻ��������

