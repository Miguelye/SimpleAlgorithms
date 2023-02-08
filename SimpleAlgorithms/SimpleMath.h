#pragma once
#include <vector>
#include <iostream>

template <typename T>
class SimpleMath
{
public:
	SimpleMath();
	SimpleMath(T);
	~SimpleMath();
	T getNumber();
	void setNumber(T);
	void oddNumbers(T);
	void absoluteValue(T);
	void howManyDigits(T);
	void MultipleNumbers(T, T);
private:
	T x;
	std::vector<T> arr;
};

template <typename T>
SimpleMath<T>::SimpleMath()
{
	x = 0;
}

template <typename T>
SimpleMath<T>::SimpleMath(T x)
{
	this->x = x;
}

template <typename T>
SimpleMath<T>::~SimpleMath()
{
}

template <typename T>
T SimpleMath<T>::getNumber()
{
	return this->x;
}

template <typename T>
void SimpleMath<T>::setNumber(T x)
{
	this->x = x;
}

/// <summary>
/// Prints the list of the amount of odd numbers
/// </summary>
/// <typeparam name="T">Type of data</typeparam>
/// <param name="number">calculate odd number until this param</param>
template <typename T>
void SimpleMath<T>::oddNumbers(T number)
{
	size_t index = 0;

	////Using module to find odd numbers
	//for (size_t i = 0; i <= (number * 2); i++)
	//{
	//	if (i % 2 == 1)
	//	{
	//		std::cout << ++index <<". " << i << std::endl;
	//	}
	//}

	//Improved and faster version
	for (size_t i = 1; i <= (number * 2); i += 2)
	{
			std::cout << ++index << ". " << i << std::endl;
	}
}

template <typename T>
void SimpleMath<T>::absoluteValue(T number)
{
	//x = number;
	////my implementation
	//if (x < 0)
	//{
	//	x = (x * -1);
	//}

	//std::cout << "The absolute value of " << number << " is: " << x << std::endl;

	//using STL
	std::cout << "The absolute value of " << number << " is: " << abs(number) << std::endl;

}

template <typename T>
void SimpleMath<T>::howManyDigits(T number)
{
	int counter = 1;
	while ((number /= 10) != 0)
	{
		++counter;
	}
	std::cout << "Number of digits: " << counter << std::endl;
}

template <typename T>
void SimpleMath<T>::MultipleNumbers(T number, T multiples)
{
	std::cout << "Multiples of " << number << "are: " << std::endl;
	for (size_t i = 0; i < multiples; i++)
	{
		std::cout << i + 1 <<". " << number * i << std::endl;
	}
}