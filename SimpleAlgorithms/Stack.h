#pragma once
#include <iostream>

class Stack
{
public:
	Stack(unsigned);
	~Stack();
	int peek();
	int pop();
	void push(int);
private:
	unsigned* stackArr;
	int head;
	unsigned size;
};

