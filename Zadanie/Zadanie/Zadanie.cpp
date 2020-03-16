#include <iostream>

using namespace std;

int a;

int main()
{
	cout << "Podaj swoj wiek: ";
	cin >> a;
	if (a >= 18)
	{
		cout << "Mozesz glosowac w wyborach";
	}
	else
	{
		cout << "Nie mozesz glosowac w wyborach";
	}

	return 0;
}