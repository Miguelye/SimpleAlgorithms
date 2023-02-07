#include <iostream>
#include <string>
#include "SimpleMath.h"
#include "Validation.h"
#include <conio.h>


using namespace std;

void Introduction();
void Choice(int);

Validation Checker;

enum Algorithms {
    OddNumbers = 1,
    TheAbsoluteValue,
    SpellingTheWordBackwards,
    HowManyDigits,
    MultipleOfNumbersUpTo,
    FindingLargestNumber,
    Can3SidesCreateTriangle,
    IsItRectangularTriangle,
    FactorialIteratively,
    FactorialRecursively,
    FibonacciIteratevely,
    FibonacciRecursively
};

int main()
{
    //Variable and Object declaration
    
    string input;
    int option;

    while (true)
    {
        do
        {
            Introduction();
            cin >> option;
        } while (!Checker.IsValid("Error. please try again."));
        
        if (option < 1 || option > 12)
        {
            system("cls");
            cout << "Invalid input, please try again." << endl;
            continue;
        }

        Choice(option);

        while (true)
        {
            cout << "\nPress 'Q' to exit or 'R' to try again" << endl;
            char input;
            input = _getch();
            if (input == 'Q' || input == 'q')
            {
                return 0;
            }
            else if (input == 'R' || input == 'r')
            {
                system("cls");
                break;
            }
            else
            {
                continue;
            }
        }
    }
}

void Introduction()
{
    cout << "\nchoose one from the following algorithms: " << endl << endl
         << "1.  OddNumbers" << endl
         << "2.  The absolute value" << endl
         << "3.  Spelling the word backwards" << endl
         << "4.  How many digits" << endl
         << "5.  Multiple of numbers up to..." << endl
         << "6.  Finding largest number" << endl
         << "7.  Can 3 sides create a triangle?" << endl
         << "8.  Is it a rectangular triangle?" << endl
         << "9.  Factorial iteratively" << endl
         << "10. Factorial recursively" << endl
         << "11. Fibonacci iteratevely" << endl
         << "12. Fibonacci recursively" << endl << endl;
}

void Choice(int choice)
{
    system("cls");
    switch (choice)
    {
    case OddNumbers:
    {
        int number;
        SimpleMath<int> equation;
        do
        {
            cout << "You have chosen 1. Odd Numbers" << endl << endl;
            cout << "This algorithm generates only odd numbers" << endl;
            cout << "Enter the amount of odd number to be generated: " << endl;
            cin >> number;
            
            if (number < 1)
            {
                Checker.ErrorMessage("Error, wrong input");
            }
        } while (!Checker.IsValid("Error, wrong input.") || number < 1);
        
        equation.oddNumbers(number);
        break;
    }
    case TheAbsoluteValue:
    {
        float number;
        SimpleMath<float> equation;
        do
        {
            cout << "You have chosen 2. Absolute value" << endl << endl;
            cout << "This algorithm turns a number to its absolute value" << endl;
            cout << "Enter the desired number: " << endl;
            cin >> number;
        } while (!Checker.IsValid("Error, wrong input."));

        equation.absoluteValue(number);
        break;
    }
        break;
    case SpellingTheWordBackwards:
        break;
    case HowManyDigits:
        break;
    case MultipleOfNumbersUpTo:
        break;
    case FindingLargestNumber:
        break;
    case Can3SidesCreateTriangle:
        break;
    case IsItRectangularTriangle:
        break;
    case FactorialIteratively:
        break;
    case FactorialRecursively:
        break;
    case FibonacciIteratevely:
        break;
    case FibonacciRecursively:
        break;
    default:
        break;
    }


}