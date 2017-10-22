// OOP_EDX.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<string>
#include<string.h>
#include<iostream>
#include"person.h"
#include"Student.h"
#include"Teacher.h"

using namespace std;
int main()
{
	Student Youssef;
	string fname="youssef", lname="awny";
	Youssef.Set_name(fname,lname);
	Youssef.Set_age(21);
	Youssef.Set_number(1284998274);
	Youssef.OutputAge();
	Youssef.OutputIdentity();
	
	Teacher Osama;
	string Tfname = "osama", Tlname = "nagy";
	Osama.Set_name(fname, lname);
	Osama.Set_age(31);
	Osama.Set_number(1284998274);
	Osama.OutputAge();
	Osama.OutputIdentity();

	return 0;

}

