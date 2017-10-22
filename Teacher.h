#pragma once
#include "person.h"
class Teacher : public person
{
public:
	Teacher();
	~Teacher();
	virtual void OutputAge();
	virtual void OutputIdentity();
};

