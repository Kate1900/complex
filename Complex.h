#pragma once
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex();
	Complex(double x, double y);
	Complex(Complex& A);
	void set(double x, double y);
	Complex get();

	//dostup k polyam :
	double getRe() { return Re; };
	void setRe(double re) { Re = re; };
	double getIm() { return Im; };
	void setIm(double im) { Im = im; };


	friend Complex operator + (Complex& x, Complex& y);
	friend Complex operator * (Complex& x, Complex& y);
	friend Complex operator - (Complex& x, Complex& y);
	friend Complex operator / (Complex& x, Complex& y);
	Complex& operator= (const Complex& x);
	friend bool operator == (Complex & x, Complex & y);
	friend ostream& operator << (ostream& out, Complex& y);
	friend istream& operator >> (istream& in, Complex& y);

protected:
	double Re;
	double Im;
};
