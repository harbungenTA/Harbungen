#include <iostream>
#include <fstream>

using namespace std;

int liczba;


int main() {

	ifstream wejscie;
	wejscie.open("D:\\wej.txt");

	ofstream wyjscie;
	wyjscie.open("D:\\wyj.txt");

	if(wejscie.good())
		while (!wejscie.eof())
			{
			wejscie >> liczba;
			if (liczba % 2 == 0)
				wyjscie << liczba << " ";
			
			}

	wyjscie.close();
	wejscie.close();

	return 0;
}	
