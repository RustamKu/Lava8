#include<string>
#include <list>
#include <iterator>
#include <iostream>
using namespace std;
class Complex {

public:
	double rez, imz;
	Complex()
	{
		rez = 0;
		imz = 0;
	}
	~Complex() {}
	Complex(double rez, double imz)
	{
		this->rez = rez;
		this->imz = imz;
	}
	Complex(const Complex& object) :
		rez(object.rez), imz(object.imz) {}
	void entercomplex()
	{
		cout << "Enter real: ";
		cin >> rez;
		cout << "Enter imag: ";
		cin >> imz;
	}
	void modulecomplex()
	{
		double m = sqrt(rez * rez + imz * imz);
		cout << "Module is  " << m << endl;
	}
	void argumentcomplex()
	{
		if (rez != 0)
		{
			double z = imz / rez;
			cout << "Argument " << z;
		}
		else cout << "Error";
	}
};
