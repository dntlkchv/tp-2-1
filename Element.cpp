#include "Element.h"

Element::Element(int data, Element* prev) {
	this->data = data;
	this->prev = prev;
}

Element::Element(const Element& Element) {
	this->data = Element.data;
	this->prev = Element.prev;
}

Element::~Element() {
	this->data = 0;
	this->prev = nullptr;
}

int Element::getData() {
	return data;
}

void Element::setData(int value) {
	
	this->data=value;

}
void Element::operator+=(int num) {
	this->data += num;
}

void Element::operator*=(int num) {
	this->data *= num;
}

void Element::operator/=(int num) {
	this->data /= num;
}

Element* Element::getPrev() {
	return prev;
}

void Element::setPrev(Element* prev) {
	this->prev = prev;
}