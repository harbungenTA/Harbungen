#include <iostream>
#include <fstream>

using namespace std;

class plik {
	ifstream wej;
	ofstream wyj;
public:
	plik();
	~plik();
	void loop();
};

plik::plik() {
	wej.open("liczby.txt");
	wyj.open("c:\\wynik.txt");
}

plik::~plik() {
	wej.close();
	wyj.close();
}

void plik::loop() {
	int a[];
	int licznik = 0;
	while (1000) {
		for (int i = 0;i < 1000; i++)
		{
			wej >> a[i];
			if (a[i] < 1000) {
				a[] >> wyj;
				licznik++;
			}
		}
		if (a[] < 1000) {
			wyj << " ";
			wyj << a[999];
			wyj << " ";
			wyj << a[1000];
		}
	}
}

int main() {

	plik dane;
	dane.loop();

	return 1;
}
