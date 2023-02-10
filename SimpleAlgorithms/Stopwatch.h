#pragma once
#include <time.h>
#include <iostream>

class Stopwatch
{
public:
	Stopwatch();
	~Stopwatch();
	void show();
	void start();
	void stop();
private:
	double begin, end;

};

