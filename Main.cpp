#include <iostream>
#include "complex_number.h"
#include "linkedlist.h"
using namespace std;
int main ()
{
	complex_number a(4,5), b(3,-3), c(4,3);
	linkedlist l;
    cout << "Given numbers 4+5i , 3-3i , 4+3i are inserted at end";
	l.insertend(a);
	l.insertend(b);
	l.insertend(n3);
	l.traverse();
	//"Inserting first number added in second number in end"
    cout << endl;
	l.insertend(a.add(b));
	l.traverse();
	//"Inserting first number subtracted from third number in end"
    cout << endl;
	l.insertend(a.sub(c));
	l.traverse();
	//"Inserting second number multiplied with third number in end"
    cout << endl;
	l.insertend(b.mul(c));
	l.traverse();
	//"Inserting first number divided by third number in end"
    cout << endl;
	l.insertend(a.div(c));
	l.traverse();
    {
		complex_number n4;
		cout << "Divison by zero check";
		n4=n1.div(n4);
	}
    int y=0;
	cout << "Delete at position\nEnter position: ";
	cin >> y;
	l.deletepos(y);
	l.traverse();
    {
		cout << "Inserting after given position";
		double real, imaginary;
		cout << "Enter real and imaginary parts";
		cin >> real >> imaginary;
        complex_number n4(real, imaginary);
        cout << "Enter position: ";
		cin >> y;
		l.insertafterpos(n4, y);
		l.traverse();
	}

}
