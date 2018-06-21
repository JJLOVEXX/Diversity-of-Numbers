
#include "Number.h"
#include<iostream>

using namespace std;

Number::Number()
{
}

Number::Number(double n)
{
	num = n;
}

void Number::print() const
{
	cout << num << endl;
}

Number Number::add(const Number & other)
{
	return num += other.num;
}

Number Number::mul(const Number & other)
{
	return num *= other.num;
}


Number::~Number()
{
}

