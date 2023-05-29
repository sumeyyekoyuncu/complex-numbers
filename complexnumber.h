#pragma once
#include <iostream>
using namespace std;
class complexnumber {
private:
	int real;
	int imag;
public:
	complexnumber(int r=0,  int i=0);
	~complexnumber();
	complexnumber(const complexnumber& oth);
	int getreal() {
		return real;
	};
	int getimag() {
		return imag;
	};
	void setvalue(int r = 0, int i = 0);
	complexnumber addcomplex(const complexnumber& oth);
	complexnumber substractcomplex(complexnumber& oth);
	void multiplyminus();
	complexnumber multiplyconstant(int constant);
	complexnumber multiplycomplex(const complexnumber& oth);



	void displaycomplex();

};
complexnumber::complexnumber(int i, int r) {
	real = i;
	imag = r;
	cout << "complex number created." << endl;
}
complexnumber::~complexnumber() {
	cout << "complex number destroyed." << endl;
}
complexnumber::complexnumber(const complexnumber& oth) {
	real = oth.real;
	imag = oth.imag;
	cout << "complex number copiedto target." << endl;
}
void complexnumber::setvalue(int r, int i) {
	real = r;
	imag = i;

}
void complexnumber::displaycomplex() {
	if (imag >= 0) {
       cout << real << "+" << imag << "i" << endl;
	}
	else {
		cout << real <<  imag << "i" << endl;
	}
	
}
complexnumber complexnumber::addcomplex(const complexnumber& oth) { // return type complexnumber
	complexnumber result;
	result.real = real + oth.real;
	result.imag = imag + oth.imag;
	return result;
}
complexnumber complexnumber::substractcomplex(  complexnumber& oth) {
	complexnumber result;
	oth.multiplyminus();
	result = addcomplex(oth);
	return result;
}
void complexnumber::multiplyminus() {
	real *= -1;
	imag *= -1;


}


complexnumber complexnumber::multiplyconstant(int constant) {
	complexnumber result;
	result.real = real * constant;
	result.imag = imag * constant;
	return result;
}
complexnumber complexnumber::multiplycomplex(const complexnumber& oth) {
	complexnumber result;
	result.real = real * oth.real;
	result.imag = real * oth.imag + imag * oth.real;
	return result;
}