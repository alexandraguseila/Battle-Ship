#include "Element.h"

Element::Element() {}

Element::Element(string element) { this->element = element; }

Element::Element(const Element& e) { this->element = e.element; }

Element::~Element() {}

string Element::get_element() { return this->element; }

Element& Element::operator=(const Element& e) { this->element = e.element; return *this; }

istream& operator>>(istream& is, Element& e) { is >> e.element; return is; }

ostream& operator<<(ostream& os, const Element& e) { os << e.element; return os; }
