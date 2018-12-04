#ifndef linkedlist_H
#define linkedlist_H
#include "complex_number.h"
class linkedlist
{
private:
	complex_number* head;
public:
	linkedlist ();
	~linkedlist ();
	void insertend(complex_number num);
	void deletepos (int x);
	void valatpos (int x);
	void insertafterpos (complex_number num, int x);
	void traverse ();
};

#endif
