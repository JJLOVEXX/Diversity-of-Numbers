
#include"Number.h"
#include "realNumber.h"
#include "integerNumber.h"
#include"complexNumber.h"
#include<iostream>

using namespace std;

int main()
{
	int number = 0;
	cout << "Please input a number,'1'->realNumber calculation,'2'->interger calculation,'3'->complex calculation: " << endl;
	while (cin >> number)
	{
		if (number == 1 || number == 2 || number == 3)
		{
			if (number == 1)
			{
				double a = 0, b = 0;
				cout << "Please input two double numbers: " << endl;
				cin >> a >> b;
				realNumber r1(a), r2(b), r3(r1);
				cout << "Addition." << endl;
				r1.add(r2);
				r1.print();
				cout << "Multiplication." << endl;
				r2.mul(r3);
				r2.print();
			}
			else if (number == 2)
			{
				cout << "Please input two integer numbers: " << endl;
				int c = 0, d = 0;
				cin >> c >> d;
				integerNumber i1(c), i2(d), i3(i1);
				cout << "Addition." << endl;
				i1.add(i2);
				i1.print();
				cout << "Multiplication." << endl;
				i2.mul(i3);
				i2.print();
			}
			else
			{
				cout << "Please input two numbers(real and image): " << endl;
				double e = 0, f = 0, g = 0, h = 0;
				cin >> e >> f;
				cout << "Please input two numbers(real and image): " << endl;
				cin >> g >> h;
				complexNumber c1(e, f), c2(g, h), c3(c1),c4(0,0),c5(0,0);
				cout << "Addition." << endl;
				c4=c1.add(c2);
				c4.print();
				cout << "Multiplication." << endl;
				c5.mul(c3);
				c5.print();
			}
		}
	}
	return 0;
}


