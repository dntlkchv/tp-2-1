#pragma once

class Element {
public:
	Element(int data, Element* prev);
	Element(const Element& Element);

	~Element();
	int getData();
	void setData(int value);
	void operator+=(int num);
	void operator*=(int num);
	void operator/=(int num);

	Element* getPrev();

	void setPrev(Element* prev);

private:
	int data;
	Element* prev;
	int value;
};