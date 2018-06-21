
#include "realNumber.h"
#include<iostream>

using namespace std;

realNumber::realNumber()
{
}

realNumber::realNumber(double n):Number::Number(n)
{
	number = n;
}
realNumber::~realNumber()
{
}

