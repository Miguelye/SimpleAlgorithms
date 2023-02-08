#pragma once
#include <vector>
#include <iostream>
#include "Validation.h"
#include <algorithm>

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
	void LargestNumber(int);
	void IsTriangle(T, T, T);
private:
	T x;
	std::vector<T> arr;
	int counterArr;
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
void SimpleMath<T>::MultipleNumbers(T number, T amount)
{
	int index = 0;
	std::cout << "Multiples of " << number << " are: " << std::endl;
	for (size_t i = 0; i <= amount; i++)
	{
		if (i % number == 0)
			std::cout << ++index <<". " << i << std::endl;
	}
}

template <typename T>
void SimpleMath<T>::LargestNumber(int size)
{
	int largest = 0;
	T temp;

	std::cout << "Enter " << size << " numbers to fill the array: " << std::endl;
	for (size_t i = 0; i < size; i++)
	{
		do
		{
			std::cin >> temp;
		} while (!Validation::IsValid("Error. wrong input"));
		arr.push_back(temp);
	}

	for (auto i: arr)
	{
		if (largest < i)
		{
			largest = i;
		}
	}
	std::cout << "\nThe largest number in the array is: " << largest << std::endl;
	std::cout << "USING STL: The largest number in the array is: " 
			  << *max_element(arr.begin(), arr.end()) << std::endl;
}

template <typename T>
void SimpleMath<T>::IsTriangle(T a, T b, T c)
{
	if ((a + b) > c && (a + c) > b && (b + c) > a)
	{
		std::cout << "Yes! You can create a triangle with this values" << std::endl;
		if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
			std::cout << "It is also a rectangular triangle!" << std::endl;
	}
	else
	{
		std::cout << "No! You cannot create a triangle with this values" << std::endl;

	}
}