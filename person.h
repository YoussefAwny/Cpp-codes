#pragma once

#include<string>
#include "stdafx.h"

using namespace std;
class person 
{
private :
	string first_name, last_name, race;
	int age;

protected:
	int phone_number;

public :
	person();
	~person();
	virtual void OutputIdentity();
	virtual void OutputAge();
	void Set_name(string Fname, string Lname);
	void Set_race(string Race);
	void Set_age(int Age);
	void Set_number(int number);
	string Get_Fname();
	string Get_Lname();
	string Get_race();
	int Get_age();
	int Get_num();

	


};
