#pragma once
#include <string>

using namespace std;

class Complex
{
public:
	Complex();
	Complex(int real, int virt);

	Complex(string z);

	explicit Complex(int i)
		: real(i), virt(i) {}

	explicit Complex(double i)
		: real(i), virt(i) {}

	void showInfo();

	
	bool setReal(const int a);
	
	bool setVirt(const int a);
	
	int getReal() const;
	
	int getVirt() const;

	void add(Complex& c);

	
	void subtract(Complex& c);
	
	void divide(Complex& c);

private:

	int real;
	int virt;
};

