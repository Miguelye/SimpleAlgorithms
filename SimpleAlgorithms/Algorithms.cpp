#include "Algorithms.h"

Algorithms::Algorithms()
{
}

Algorithms::~Algorithms()
{
}

void Algorithms::WordBackward(std::string word)
{
	char temp;
	for (size_t i = word.size(); i > 0; i--)
	{
		temp = word[i - 1];
		std::cout << temp;
	}
}