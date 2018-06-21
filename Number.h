#pragma once
class Number
{
public:
	Number();
	Number(double);
	virtual void print()const;
	virtual Number add(const Number & other);
	virtual Number mul(const Number & other);
	~Number();
private:
	double num;
	double numnum;
};


