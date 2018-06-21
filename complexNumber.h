
#include "Number.h"
class complexNumber :
	public Number
{
public:
	complexNumber();
	complexNumber(double, double);
	void print()const;
	complexNumber add(const complexNumber &);
	complexNumber mul(const complexNumber &);
	~complexNumber();
private:
	double real;
	double image;
};

