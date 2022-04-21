#pragma once

#include <iostream>

#include "Element.h"
using namespace std;

class Stack {

	friend bool operator!(Stack& stack);
	friend Stack& operator++(Stack& stack);
	friend Stack operator++(Stack& stack, int);

public:

	void setHead(Element* element);
	Element* getHead();

	Stack& operator--();       // Prefix decrement operator.
	Stack operator--(int);     // Postfix decrement operator.

	void print();
	void pop();
	bool isEmpty();
	int getData();
	int getMin();
	int getMax();
	void push(int number);
private:
	Element* head;
	int number;
};