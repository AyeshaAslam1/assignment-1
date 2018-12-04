#include <iostream>
#include "complex_number.h"
#include "linkedlist.h"
using namespace std;
linkedlist::linkedlist ()
{
	head=NULL;
}
linkedlist::~linkedlist ()
{
	;
}
void linkedlist::insertend(complex_number num)
	{
	complex_number* temp= head;
	complex_number* newnode=new complex_number;
    newnode->real=num.real;
	newnode->imag=num.imag;
	newnode->ptr=NULL;
	if (temp == NULL)
	{
		head = newnode;
	}
	else
	{
		while (temp->ptr)
			temp=temp->ptr;
		temp->ptr=newnode;
	}
}

void linkedlist::deletepos (int x)
{
    complex_number* previous=head;
	complex_number* current=head->ptr;
    int a=1;
	while (a < x-1)
	{
		previous=previous->ptr;
		a++;
	}
	current=previous->ptr;
	previous->ptr=current->ptr;
	delete current;
}
void linkedlist::valatpos (int x)
{
	complex_number* temp=head;
	int a=1;
	while (a < x)
	{
		temp=temp->ptr;
		a++;
	}
	cout << temp->real << "+" << temp->imaginary << "i\n";
}
void linkedlist::insertafterpos(complex_number num, int x)
{
	complex_number* temp = head;
	complex_number* newnode = new complex_number;
	newnode->real = num.real;
	newnode->imag = num.imag;
	newnode->ptr = NULL;
	int a = 1;
	while (a < x)
	{
		temp = temp->ptr;
		a++;
	}
	newnode->ptr = temp->ptr;
	temp->ptr = newnode;
}
void linkedlist::traverse()
{
	complex_number*temp= head;
    while (temp)
	{
		cout << temp->real << "+" << temp->imag << "i\t";
		temp=temp->ptr;
	}
	cout << endl;
}
