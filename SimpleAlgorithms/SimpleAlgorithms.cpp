#include <iostream>
#include <string>
#include "SimpleMath.h"
#include "Validation.h"
#include "Algorithms.h"
#include <conio.h>


using namespace std;

void Introduction();
void Choice(int);

Validation Checker;

enum AlgorithmsList {
    OddNumbers = 1,
    TheAbsoluteValue,
    SpellingTheWordBackwards,
    HowManyDigits,
    MultipleOfNumbersUpTo,
    FindingLargestNumber,
    Can3SidesCreateTriangle,
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
        short number;
        SimpleMath<short> equation;
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
    {
        string word;
        Algorithms Algor;
        do
        {
            cout << "You have chosen 3. Spelling the word backward" << endl << endl;
            cout << "This algorithm takes a string and reverse the letters" << endl;
            cout << "Enter the desired word: " << endl;
            cin >> word;
        } while (!Checker.IsValid("Error, wrong input."));

        Algor.WordBackward(word);

        break;
    }
    case HowManyDigits:
    {
        int number;
        SimpleMath<int> equation;
        do
        {
            cout << "You have chosen 4. How many Digits" << endl << endl;
            cout << "This algorithm returns the number of digits in a number" << endl;
            cout << "Enter the desired number: " << endl;
            cin >> number;
        } while (!Checker.IsValid("Error, wrong input."));

        equation.howManyDigits(number);
        break;
    }
    case MultipleOfNumbersUpTo:
    {
        int number;
        int amount;
        SimpleMath<int> equation;
        do
        {
            cout << "You have chosen 5. Multiples of number up to..." << endl << endl;
            cout << "This algorithm returns the multiples of a number up to desired amount" << endl;
            cout << "Enter the number to find multiples of: " << endl;
            cin >> number;
        } while (!Checker.IsValid("Error, wrong input."));
        do
        {
            cout << "Enter the desired amount: " << endl;
            cin >> amount;
        } while (!Checker.IsValid("Error, wrong input."));
        equation.MultipleNumbers(number, amount);
        break;
    }
    case FindingLargestNumber:
    {
        SimpleMath<double> equation;
        int size;
        do
        {
            std::cout << "You have chosen 7. Find largest number" << std::endl << std::endl;
            std::cout << "This algorithm returns the largest number in an array" << std::endl;
            std::cout << "Enter the size of the array: " << std::endl;
            std::cin >> size;
        } while (!Checker.IsValid("Error, wrong input."));

        equation.LargestNumber(size);
        break;
    }
    case Can3SidesCreateTriangle:
    {
        SimpleMath<double> equation;
        double ABC[3];
        std::cout << "You have chosen 8. Is a triangle?" << std::endl << std::endl;
        std::cout << "This algorithm tells you if a triangle is possible the 3 given values" << std::endl;
        for (size_t i = 0; i < 3; i++)
        {
            do
            {
                std::cout << "Enter side #" << i + 1 << ": " << std::endl;
                std::cin >> ABC[i];
                if (ABC[i] <= 0)
                    std::cout << "Error: Negative number." << std::endl;
            } while (!Checker.IsValid("Error, wrong input.") || ABC[i] <= 0);
        }

        equation.IsTriangle(ABC[0], ABC[1], ABC[2]);
        break;
    }
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