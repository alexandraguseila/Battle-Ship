#ifndef ELEMENT_H
#define ELEMENT_H

#include <iostream>
using namespace std;

class Element
{
private:
	string element;
public:
	Element();
	Element(string element);
	Element(const Element& e);
	~Element();
	
	string get_element();

	Element& operator=(const Element& e);
	friend istream& operator>>(istream& is, Element& e);
	friend ostream& operator<<(ostream& os, const Element& e);
};

#endif // !ELEMENT_H
