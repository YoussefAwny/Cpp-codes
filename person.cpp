#include "stdafx.h"
#include "person.h"
#include<iostream>


person::person()
{
}

person::~person()
{
}

void person::OutputIdentity()
{
}

void person::OutputAge()
{
	cout << "i am " << age << " years old";
}

void person::Set_name(string Fname, string Lname)
{
	first_name = Fname;
	last_name = Lname;
}

void person::Set_race(string Race)
{
	race  =  Race;
}

void person::Set_age(int Age)
{
	age = Age;
}

void person::Set_number(int number)
{
	phone_number = number ;
}

string person::Get_Fname()
{
	return first_name;
}

string person::Get_Lname()
{
	return last_name;
}

string person::Get_race()
{
	return race;
}

int person::Get_age()
{
	return age;
}

int person::Get_num()
{
	return phone_number;
}
