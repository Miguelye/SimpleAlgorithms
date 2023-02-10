#include "Stopwatch.h"

using namespace std;

Stopwatch::Stopwatch()
{
	begin = end = 0;
}

Stopwatch::~Stopwatch()
{
	show();
}

void Stopwatch::show()
{
	cout << "Time transcurred during this program: " << end - begin;
	cout << endl;
}

void Stopwatch::stop()
{
	end = (double)clock() / CLK_TCK;
}

void Stopwatch::start()
{
	begin = (double) clock() / CLK_TCK;
}