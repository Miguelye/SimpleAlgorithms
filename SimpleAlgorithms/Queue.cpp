#include "Queue.h"

using namespace std;

CircularQueue::CircularQueue(unsigned size)
{	
	head = tail = 0;	
	this->size = size;	
	queueArray = new unsigned[this->size]; //dynamacally allocating memory
}

CircularQueue::~CircularQueue()
{
	delete[] queueArray; //releasing allocated memory
}

void CircularQueue::Enqueue(int number)
{
	if ((tail + 1) % size == head)
	{
		cout << "Queue is full" << endl;
	}
	else
	{
		tail = (tail + 1) % size;
		queueArray[tail] = number;
	}
}

int CircularQueue::Dequeue()
{
	if (head == tail)
	{
		cout << "Queue is empty" << endl;
		return NULL;
	}
	else
	{
		head = (head + 1) % size;

		return queueArray[head];
	}
}