#include "Validation.h"

using namespace std;

bool Validation::IsValid(string errorMessage)
{
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		system("cls");
		cout << errorMessage << endl << endl;
		return false;
	}
	return true;
}