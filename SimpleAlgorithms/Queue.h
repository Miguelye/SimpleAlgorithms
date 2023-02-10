#pragma once
#include <iostream>

class CircularQueue
{
public:
	CircularQueue(unsigned);
	~CircularQueue();
	void Enqueue(int);
	int Dequeue();

private:
	unsigned* queueArray;	//create pointer to dynamically allocated memory
	unsigned size;			//size of the dyna array
	int head, tail;			// "Fake Pointers" 

};