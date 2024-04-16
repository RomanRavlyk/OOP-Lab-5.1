#include "Fraction.h"
#include <iostream>
#include <sstream>
using namespace std;

void Fraction::setFirst(double value) {
	first = value;
};

void Fraction::setSecond(double value) {
	second = value;
};

Fraction& Fraction::operator ++()
{
	first++;
	return *this;
}
Fraction& Fraction::operator --()
{
	first--;
	return *this;
}
Fraction Fraction::operator ++(int)
{
	Fraction t(*this);
	second++;
	return t;
}
Fraction Fraction::operator --(int)
{
	Fraction t(*this);
	second--;
	return t;
}

ostream& operator << (ostream& out, const Fraction& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Fraction& r)
{
	cout << " Fr = "; in >> r.first;
	cout << " Sc = "; in >> r.second;
	cout << endl;
	return in;
}

Fraction::operator string () const
{
	stringstream ss;
	ss << " First = " << first << endl;
	ss << " Second = " << second << endl;
	return ss.str();
}

Fraction& Fraction::operator=(const Fraction& other) {
	if (this != &other) {
		this->first = other.first;
		this->second = other.second;
	}
	return *this;
}

double Fraction::ipart() const {
	try {
		if (second == 0) {
			throw second;
		}

		return first / second;
	}
	catch (double) {
		cout << "Dividing by zero is not recognized";
		exit(1);
		return 0;
	}
}