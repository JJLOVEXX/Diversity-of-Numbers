
#include "complexNumber.h"
#include<iostream>

using namespace std;

complexNumber::complexNumber()
{
}

complexNumber::complexNumber(double a, double b)
{
	real = a;
	image = b;
}

void complexNumber::print() const
{
	if (image>0)
	{
		cout << real << '+' << image << "i" << endl;
	}
	else if (real == 0)
	{
		cout << real << endl;
	}
	else if (image<0)
	{
		cout << real << image << "i" << endl;
	}
}

complexNumber complexNumber::add(const complexNumber &other)
{
	return complexNumber(real+=other.real,image+=other.image);
}

complexNumber complexNumber::mul(const complexNumber &other)
{
	complexNumber c;
	c.real = real * other.real - image * other.image;
	c.image = real * other.image + image * other.real;
	return c;
}


complexNumber::~complexNumber()
{
}

