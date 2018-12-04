#ifndef complex_number_H
#define complex_number_H
class complex_number
{
public:
	double real, imag;
	complex_number* ptr;
	complex_number();
	complex_number(double re, double img);
	~complex_number();
	complex_number add (complex_number num);
	complex_number sub (complex_number num);
	complex_number mul (complex_number num);
	complex_number div (complex_number num);
};

#endif
