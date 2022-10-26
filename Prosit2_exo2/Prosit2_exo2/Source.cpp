#include "pch.h"

void c1::func1()
{
	cout << "c1 ";
}
void c2::func2()
{
	cout << "c2 ";
}
void c3::func3()
{
	cout << "c3 ";
}


void service1::gpcs1s1()
{
	cout << "gpcs1s1" << endl;
	this->o1.func1();
	this->o2.func2();
	cout << "\n";
}
void service1::gpcs1s2()
{
	cout << "gpcs1s2" << endl;
	this->o3.func3();
	cout << "\n";
}
void service2::gpcs2s1()
{
	cout << "gpcs2s1" << endl;
	this->o4.func1();
	this->o5.func3();
	cout << "\n";
}

