/*
Ömer ALTUNTAŞ

3-6 . 03 . 2020

Bir karmaşık sayı sınıfı. Karmaşık sayılarla toplama,
çıkarma, bölme işlemleri. Stringi karmaşık sayıya çevirme.
A complex number class. Addition, substraction, division
operations with numbers. Converting string to complex number.

*/
#pragma once
#include <string>

using namespace std;

class Complex 
{
public:
	Complex(); //Default Constructor
	
	Complex(int real, int virt);	

	Complex(const string & z);//Conversion Constructor

	explicit Complex(int i)//Conversion Constructor
		: real(i), virt(i) {}

	explicit Complex(double i)//Conversion Constractor
		: real(i), virt(i) {}

	void showInfo();

	bool setReal(const int a);
	
	bool setVirt(const int a);
	
	int getReal() const;
	
	int getVirt() const;

	void add(const Complex& otherObject);

	void subtract(const Complex& otherObject);
	
	void divide(const Complex& otherObject);

private:

	int real;
	int virt;
};

