#include "stdafx.h"
#include "Student.h"
#include<iostream>


Student::Student()
{
}


Student::~Student()
{
}

void Student::OutputIdentity()
{
	cout << "I'm a student :) "<<endl;
}

void Student::OutputAge()
{
	OutputIdentity();
	person::OutputAge();
}
