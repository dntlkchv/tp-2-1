#include "Stack.h"
#include <iostream>

using namespace std;

void Stack::setHead(Element* element) {
	this->head = element;
}

Element* Stack::getHead() {
	return head;
}

bool Stack::isEmpty() {
	return this->head == nullptr;
}

bool operator!(Stack& stack)
{
	return stack.isEmpty();
}

void Stack::push(int number) {
	Element* element = new Element(number, head);
	this->head = element;
}

void Stack::pop() {
	if (this->isEmpty()) {
		std::cout << "The queue is empty." << std::endl;
		return;
	}

	Element* tmp = this->head;

	int value = this->head->getData();
	this->head = this->head->getPrev();
	delete tmp;

	std::cout << "Result: " << value << std::endl;
}

int Stack::getMin() {
	if (this->isEmpty()) {
		std::cout << "The queue is empty." << std::endl;
		return -999999;
	}

	Element* element = this->getHead();

	int min = element->getData();

	while (element)
	{
		min = (element->getData() < min) ? element->getData() : min;

		element = element->getPrev();
	}

	element = this->getHead();

	return min;

}

int Stack::getMax() {
	if (this->isEmpty()) {
		std::cout << "The queue is empty." << std::endl;
		return -999999;
	}

	Element* element = this->getHead();

	int max = element->getData();

	while (element)
	{
		max = (element->getData() > max) ? element->getData() : max;

		element = element->getPrev();
	}

	element = this->getHead();

	return max;

}


Stack& operator++(Stack& stack) //pre inc
{
	int maxValue = stack.getMax();
	Element* element = stack.getHead();

	while (element) {

		int value = element->getData();
		element->setData(value + maxValue);
		element = element->getPrev();
	}

	return stack;
}
Stack operator++(Stack& stack, int) //post inc
{
	int minValue = stack.getMin();
	Element* element = stack.getHead();

	while (element) {

		int value = element->getData();
		element->setData(value + minValue);
		element = element->getPrev();
	}
	return stack;
}

Stack& Stack::operator--() //pre dec
{

	int maxValue = this->getMax();
	Element* element = this->getHead();

	while (element) {

		int value = element->getData();
		element->setData(value - maxValue);
		element = element->getPrev();
	}

	return *this;
}

Stack Stack::operator--(int) //post dec
{

	int minValue = this->getMin();
	Element* element = this->getHead();

	while (element) {

		int value = element->getData();
		element->setData(value - minValue);
		element = element->getPrev();
	}

	return *this;
}

void Stack::print() {

	if (this->isEmpty())
	{
		std::cout << "<Stack is Empty>" << std::endl;
		return;
	}

	Element* current = this->head;

	while (current)
	{
		std::cout << current->getData();

		current = current->getPrev();

		if (current) std::cout << " || ";
	}

	std::cout << std::endl;

}
