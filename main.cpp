#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	Complex x;
	Complex y(7, 5);
	Complex z(y);
	cout <<x<<" "<<y<<" "<<z<< "Constructors" << endl;
	z.set(9, 4);
	cout << z.get() <<" set&&get "  << endl;
	Complex f;
	f = x + y;
	cout << f << " operator + " << endl;
	f = f - y;
	cout << f << " operator - " << endl;
	f = z * y;
	cout << f << " operator * " << endl;
	f = z / y;
	cout << " operator / " << f << endl;
	f = y;
	cout << f << " operator = " << endl;
	cout << (f == y) << " operator == " << endl;
	cout << (x == y) << " operator == " << endl;

	Complex r;
	cin >> r;
	cout << r << " operator cin>> " << endl;

	return 0;
}