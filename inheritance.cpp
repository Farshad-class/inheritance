#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
using namespace std;
class Grandfather
{
public:
	string eyecolor;
	string name;
	int age;
	void All()
	{
		cout << name << " eyecolor is " << eyecolor << " and age is " << age << endl;
		action();
	}
	void All2()
	{
		cout << name << " age is " << age << endl;
		action();
	}
	void action()
	{
		cout << name << " Can Talk ,eat and have bank account " << endl;
	}

	void Grandfatherability()
	{
		cout << name << " can play Piano" << endl;
	}
};
class Child : public Grandfather
{
public:

	void childability()
	{
		cout << name << " can driving" << endl;
		cout << name << " can Swimming" << endl;
	}
};
class Grandchild : public Child
{
	/*Grandfather eye;*/
public:
	void garndchildability()
	{
		cout << name << " can play Football." << endl;
		cout << name << " can C++ programming." << endl;
		/*	cout << eye.eyecolor << " is color of Grandchild  " << endl;*/
	}

};
int main()
{
	Grandfather gf;
	Child ch;
	Grandchild gch;
	cout << "Please enter Grandfather name : " << endl;
	cin >> gf.name;
	cout << "Please enter Grandfather age : " << endl;
	cin >> gf.age;
	cout << "Please enter Grandfather eyecolor : " << endl;
	cin >> gf.eyecolor;
	cout << "Please enter Child name : " << endl;
	cin >> ch.name;
	cout << "Please enter Child age : " << endl;
	cin >> ch.age;
	cout << "Please enter Child eyecolor : " << endl;
	cin >> ch.eyecolor;
	cout << "Please enter Grandchild name : " << endl;
	cin >> gch.name;
	cout << "Please enter Grandchild age : " << endl;
	cin >> gch.age;
	cout << endl;
	cout << endl;
	gf.All();
	gf.Grandfatherability();
	ch.All();
	ch.childability();
	gch.All2();
	gch.garndchildability();
	return 0;
}

