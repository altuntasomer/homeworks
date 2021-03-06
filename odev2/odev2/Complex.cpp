/*
Ömer ALTUNTAŞ

3-6 . 03 . 2020

Bir karmaşık sayı sınıfı. Karmaşık sayılarla toplama, 
çıkarma, bölme işlemleri. Stringi karmaşık sayıya çevirme.
A complex number class. Addition, substraction, division 
operations with numbers. Converting string to complex number.

*/
#include "Complex.h"
#include <iostream>
using namespace std;

Complex::Complex(){//Default Constructor
	
	real = 0;
	virt = 0;
}

Complex::Complex(int real, int virt){
	
	this->real = real;
	this->virt = virt;
}

Complex::Complex(const string & z) {//Stringi Karmaşık Sayıya Çevirir.
									//Converting string to Complex number.

	int i, j{ -1 };
	int size = z.length();
	int virtT;
	string tempReal, tempVirt;
	for (i = 0; i < size; i++) {

		if (z[i] == '+') {

			j = 1;
			break;
		}
		else if (z[i] == '-') {

			j = -1;
			break;
		}
		else if (z[i] == ' ') {

		}
		else {
			tempReal += z[i];

		}
	}



	for (; i < size; i++) {

		if (z[i] == ' ') {

		}
		else {
			tempVirt += z[i];
		}

	}

	real = stoi(tempReal);
	virtT = stoi(tempVirt);
	virt = virtT;
}

void Complex::showInfo(){

	if (virt > 0)
		cout << real << "+" <<
		virt << "i" << endl;

	else if (virt == 0)
		cout << real << endl;

	else
		cout << real << "" << virt << "i" << endl;
}

bool Complex::setReal(const int real) {

	
		this->real = real;
		return true;
	
}

bool Complex::setVirt(const int virt) {

	this->virt = virt;
	return true;
}

int Complex::getReal()const {

	return real;
}
int Complex::getVirt()const {

	return virt;
}

void Complex::add(const Complex & otherObject) {

	int resultReal = real + otherObject.real;
	int resultVirt = virt + otherObject.virt;

	if (resultVirt > 0)
		cout << resultReal << "+" <<
		resultVirt << "i" << endl;

	else if (resultVirt == 0)
		cout << resultReal << endl;

	else
		cout << resultReal << "" << resultVirt << "i" << endl;
}

void Complex::subtract(const Complex & otherObject){

	int resultReal = real - otherObject.real;
	int resultVirt = virt - otherObject.virt;

	if (resultVirt > 0)
		cout << resultReal << "+" <<
		resultVirt << "i" << endl;

	else if (resultVirt == 0)
		cout << resultReal << endl;

	else
		cout << resultReal << "" << resultVirt << "i" << endl;
}

void Complex::divide(const Complex & otherObject){


	if (otherObject.virt == 0) {
		cout << "0'a bolme hatasi";
		return;
	}
	double realt = real;
	double virtt = virt;
	double resultReal = realt / otherObject.real;
	double resultVirt = virtt / otherObject.virt;

	if (resultVirt > 0)
		cout << resultReal << "+" <<
		resultVirt << "i" << endl;

	else if (resultVirt == 0)
		cout << resultReal << endl;

	else
		cout << resultReal << "" << resultVirt << "i" << endl;
}
