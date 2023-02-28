#pragma once
#include <iostream>

class Stack
{
public:
	Stack() { head = 0; size = 5;  stackArr = new unsigned[size]; }
	Stack(unsigned);
	~Stack();
	int peek();
	int pop();
	void push(int);
	unsigned getSize() { return size; }
private:
	unsigned* stackArr;
	int head;
	unsigned size;
};

