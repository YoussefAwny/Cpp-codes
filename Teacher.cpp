#include "stdafx.h"
#include "Teacher.h"
#include<iostream>

Teacher::Teacher()
{
}


Teacher::~Teacher()
{
}

void Teacher::OutputAge()
{
	OutputIdentity();
	person::OutputAge();
}

void Teacher::OutputIdentity()
{
	cout << "i'm a teacher" << endl;
}
