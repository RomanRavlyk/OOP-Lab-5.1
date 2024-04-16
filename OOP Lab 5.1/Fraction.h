#pragma once
#include <iostream>
#include <string>
using namespace std;
class Fraction {
private:
	double first;
	double second;
public:
	Fraction() : first(0), second(1) {}
	Fraction(double num, double denom) : first(num), second(denom) {}
	Fraction(const Fraction& other) : first(other.first), second(other.second) {}


	double ipart() const;
	double getFirst() const { return first; };
	double getSecond() const { return second; };
	void setFirst(double value);
	void setSecond(double value);

	Fraction& operator ++();
	Fraction& operator --();
	Fraction operator ++(int);
	Fraction operator --(int);
	Fraction& operator=(const Fraction& other);
	friend ostream& operator << (ostream&, const Fraction&);
	friend istream& operator >> (istream&, Fraction&);
	operator string() const;

};