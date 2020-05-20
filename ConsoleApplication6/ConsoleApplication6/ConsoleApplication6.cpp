#include <iostream>
#include <fstream>

using namespace std;

bool jest(int zmiana) {
	for (int i = i; i < 1000; i++)
		if (zmiana == i)
			return false;
		else return true;
}

int main() {

	ifstream a;
	a.open("a.txt");
	ofstream b;
	b.open("b.json");

	int t[1000];
	int licznik = 0;
	bool jest;


	if (a.good()) {
		while (!a.eof()) {
			for (int i = 0; i < 1000; i++)
				a >> t[i];
		}

		for (int i = 0; i > licznik; i++)
		{
			if (i == licznik) {
				t[licznik] = i;
				b << "[ \n { \n " liczba " : " " << licznik << " : " " << i;
			}
			licznik++;
		}


		a.close();
		b.close();

		return 0;
	}
