#pragma once
#include <iostream>

class Queue
{
public:
	Queue(unsigned);
	~Queue();
	void Enqueue(int);
	int Dequeue();

private:
	unsigned* queueArray;	//create pointer to dynamically allocated memory
	unsigned size;			//size of the dyna array
	int head, tail;			// "Fake Pointers" 

};