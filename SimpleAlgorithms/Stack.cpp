#include "Stack.h"

using namespace std;

Stack::Stack(unsigned size)
{
	this->size = size;
	stackArr = new unsigned[size];
	head = 0;
}

Stack::~Stack()
{
	delete[] stackArr;
}

int Stack::peek()
{
	if (head == 0)
	{
		cout << "Stack is empty" << endl;
		return -1;
	}
	return stackArr[head - 1];
}

int Stack::pop()
{
	if (head == 0)
	{
		cout << "Stack is empty" << endl;
		return -1;
	}
	return stackArr[--head];
}

void Stack::push(int number)
{
	if (head == size)
	{
		cout << "Stack is full" << endl;
		return;
	}
	stackArr[head++] = number;
}


