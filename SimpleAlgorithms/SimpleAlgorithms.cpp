#include <iostream>
#include <string>
#include "SimpleMath.h"
#include "Validation.h"
#include "Algorithms.h"
#include <conio.h>
#include "Queue.h"
#include "Stopwatch.h"
#include "Stack.h"

using namespace std;

void IntroductionList1();
void ChoiceList1(int);
void List1();
void ShowStack(Stack*);

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
    FibonacciRecursively, 
    SquareRoot,
    VolumeBox,
    LogTable,
};

int main()
{
    Stopwatch Timer;
    Timer.start();



    //===== Stack =======//
    //Stack s1(3);

    //s1.push(4);
    //s1.push(3);
    //s1.push(2);
    //s1.push(1);

    //ShowStack(&s1);
    //cout << s1.peek() << endl;

    //cout << s1.pop() << endl;
    //cout << s1.pop() << endl;
    //cout << s1.pop() << endl;
    //cout << s1.pop() << endl;


    //===== Circular Queue =======//
    //CircularQueue q1(4);

    //q1.Enqueue(3);
    //q1.Enqueue(5);
    //q1.Enqueue(6);
    //cout << q1.Dequeue() << endl;
    //cout << q1.Dequeue() << endl;
    //cout << q1.Dequeue() << endl;


    List1();

    Timer.stop();
    return 0;
}

void List1()
{
    //Variable and Object declaration

    string input;
    int option;

    while (true)
    {
        do
        {
            IntroductionList1();
            cin >> option;
        } while (!Checker.IsValid("Error. please try again."));

        if (option < 1 || option > 20)
        {
            system("cls");
            cout << "Invalid input, please try again." << endl;
            continue;
        }

        ChoiceList1(option);

        while (true)
        {
            cout << "\nPress 'Q' to exit or 'R' to try again" << endl;
            char input;
            input = _getch();
            if (input == 'Q' || input == 'q')
            {
                return;
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

void IntroductionList1()
{
    cout << "\nchoose one from the following algorithms: " << endl << endl
         << "1.  OddNumbers"                        << endl
         << "2.  The absolute value"                << endl
         << "3.  Spelling the word backwards"       << endl
         << "4.  How many digits"                   << endl
         << "5.  Multiple of numbers up to..."      << endl
         << "6.  Finding largest number"            << endl
         << "7.  Can 3 sides create a triangle?"    << endl
         << "8.  Factorial iteratively"             << endl
         << "9.  Factorial recursively"             << endl
         << "10. Fibonacci iteratevely"             << endl
         << "11. Fibonacci recursively"             << endl
         << "12. Square Root"                       << endl
         << "13. Volume Box"                        << endl
         << "14. Log Table"                        << endl << endl;
}

void ChoiceList1(int choice)
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
            std::cout << "You have chosen 6. Find largest number" << std::endl << std::endl;
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
        std::cout << "You have chosen 7. Is a triangle?" << std::endl << std::endl;
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
    {
        SimpleMath<int> equation;
        int number;
        do
        {
            std::cout << "You have chosen 8. Factorial Iteratively" << std::endl << std::endl;
            std::cout << "This algorithm returns the factorial of a number using a iteratively algorigthm" << std::endl;
            std::cout << "Enter number to be factorial: " << std::endl;
            std::cin >> number;
            if (number <= 0)
                std::cout << "Error: Negative number." << std::endl;
        } while (!Checker.IsValid("Error, wrong input.") || number <= 0);

        equation.FactorialIteration(number);
        break;
    }
    case FactorialRecursively:
    {
        SimpleMath<int> equation;
        int number;
        do
        {
            std::cout << "You have chosen 9. Factorial Recursively" << std::endl << std::endl;
            std::cout << "This algorithm returns the factorial of a number using a recursively algorithm" << std::endl;
            std::cout << "Enter number to be factorial: " << std::endl;
            std::cin >> number;
            if (number <= 0)
                std::cout << "Error: Negative number." << std::endl;
        } while (!Checker.IsValid("Error, wrong input.") || number <= 0);

        std::cout << "The factorial of " << number << " is: "
            << equation.FactorialRecursively(number) << std::endl;
        break;
    }
    case FibonacciIteratevely:
    {
        SimpleMath<int> equation;
        int number;
        do
        {
            std::cout << "You have chosen 9. Fibonacci Iteratively" << std::endl << std::endl;
            std::cout << "This algorithm returns the fibonacci of a number using a iteratively algorigthm" << std::endl;
            std::cout << "Enter number: " << std::endl;
            std::cin >> number;
            if (number < 0)
                std::cout << "Error: Negative number." << std::endl;
        } while (!Checker.IsValid("Error, wrong input.") || number < 0);

        equation.FibonacciIteration(number);
        break;
    }
    case FibonacciRecursively:
    {
        SimpleMath<int> equation;
        int number;
        do
        {
            std::cout << "You have chosen 11. Fibonacci Recursively" << std::endl << std::endl;
            std::cout << "This algorithm returns the fibonacci of a number using a recursively algorithm" << std::endl;
            std::cout << "Enter number: " << std::endl;
            std::cin >> number;
            if (number <= 0)
                std::cout << "Error: Negative number." << std::endl;
        } while (!Checker.IsValid("Error, wrong input.") || number <= 0);

        std::cout << "The fibonacci of " << number << " is: "
            << equation.FibonacciRecursively(number) << std::endl;
        break;
    }
    case SquareRoot:
    {
        SimpleMath<double> equation;
        double number;
        do
        {
            std::cout << "You have chosen 12. Square Root" << std::endl << std::endl;
            std::cout << "This algorithm returns the square root of a number using overload fuctions" << std::endl;
            std::cout << "Enter number: " << std::endl;
            std::cin >> number;
            if (number < 0)
                std::cout << "Error: Negative number." << std::endl;
        } while (!Checker.IsValid("Error, wrong input.") || number < 0);

        cout << "The square root of " << number << " is: " << equation.SquareRoot((int)number) << " (int)" << endl;
        cout << "The square root of " << number << " is: " << equation.SquareRoot((long)number) << " (long)" << endl;
        cout << "The square root of " << number << " is: " << equation.SquareRoot(number) << " (double)" << endl;
        break;
    }
    case VolumeBox:
    {
        SimpleMath<double> equation;
        double height;
        double width;
        double depth;
        do
        {
            std::cout << "You have chosen 13. VolumeBox" << std::endl << std::endl;
            std::cout << "This algorithm returns the volume of a box" << std::endl;
            std::cout << "Enter height: " << std::endl;
            std::cin >> height;
            if (height < 0)
                std::cout << "Error: Negative number." << std::endl;
        } while (!Checker.IsValid("Error, wrong input.") || height < 0);
        do
        {
            std::cout << "Enter Width: " << std::endl;
            std::cin >> width;
            if (width < 0)
                std::cout << "Error: Negative number." << std::endl;
        } while (!Checker.IsValid("Error, wrong input.") || width < 0);
        do
        {
            std::cout << "Enter Depth: " << std::endl;
            std::cin >> depth;
            if (depth < 0)
                std::cout << "Error: Negative number." << std::endl;
        } while (!Checker.IsValid("Error, wrong input.") || depth < 0);

        cout << "The volume of the box is: " << equation.VolumeBox(height, width, depth) << endl;
        break;
    }
    case LogTable:
    {
        SimpleMath<double> equation;
        double number;
        do
        {
            std::cout << "You have chosen 14. Log Table" << std::endl << std::endl;
            std::cout << "This algorithm returns a log table using E/S format starting from 2 up to choosen number" << std::endl;
            std::cout << "Enter number: " << std::endl;
            std::cin >> number;
            if (number < 0)
                std::cout << "Error: Negative number." << std::endl;
        } while (!Checker.IsValid("Error, wrong input.") || number < 0);

        equation.LogTable(number);
        break;
    }
    default:
        break;
    }


}

void ShowStack(Stack* stck)
{
    for (size_t i = 0; i < stck->getSize(); i++)
    {
        cout << stck->pop() << endl;
    }
}