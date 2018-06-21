#pragma once
#include "Number.h"
class realNumber :
	public Number
{
public:
	realNumber();
	realNumber(double);
	~realNumber();
private:
	double number;
};


