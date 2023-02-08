#pragma once
#include <iostream>
#include <limits>
#include <stdlib.h>


class Validation
{
public:
	bool static IsValid(std::string);
	void ErrorMessage(std::string);
private:
	friend class Algorithms;
};