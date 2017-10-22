#pragma once
#include "person.h"
class Student : public person
{
public:
	Student();
	~Student();
	virtual void OutputIdentity();
	virtual void OutputAge();

};

