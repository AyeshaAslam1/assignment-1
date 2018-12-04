#include <iostream>
#include "complex_number.h"
using namespace std;
complex_number::complex_number()
{
	real=0;
	imag=0;
	ptr=NULL;
}
complex_number::complex_number(double r, double i)
{
	real=r;
	imag=i;
	ptr=NULL;
}
complex_number::~complex_number()
{
	;
}
complex_number complex_number::sub (complex_number num)
{
    complex_number s;
	s.real= real-num.real;
	s.imag=imag-num.imag;
	return s;
}
complex_number complex_number::div (complex_number num)
{
	complex_number r;
	double d = (num.real * num.real + num.imag * num.imag);
    try
	{
		if (d==0)
			throw 0;
			r.real= ( real * num.real + imag * num.imag) / d ;
		r.imag =( -real * num.imag + imag * num.real ) / d ;
		return r;

	}
	catch (int dummy)
	{
		cerr << "Error";
		return result;
	}
}
complex_number complex_number::mul(complex_number num)
{
	complex_number pro;
	pro.real = real * num.real - imag* num.imag;
	pro.imag = real * num.imag + imag * num.real;
	return pro;
}
complex_number complex_number::add(complex_number num)
{
	complex_number sum;
	sum.real = num.real + real;
	sum.imag = num.imag + imag;
	return sum;
}
