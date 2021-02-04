#include <iostream>
#include <vector>
#include <fstream>
#include <math.h>
#include <string>

using namespace std;

//struct uczen
//{
//   string imie, nazwisko;
//    int numer;
//};

//class klasa
//{
//	vector <struct uczen> spis;

//public:
//	void wprowadz();
//	void wypisz();
//	void zapiszDoPliku(const char*);
//              void wczytajZPliku(const char *);                
//};


int main(int argc, char** argv) {
    int zero = 0;
    int l = 1000;
    int numb[l], conn[l];
    int min, max;
    ifstream wej("liczby1.txt");
    ifstream wej2("liczby2.txt");
    ofstream wyj("wyjscie.txt");

    if (wej.good()) {
        while (!wej.eof()) {
            wej >> numb[zero];
            zero++;
        }
    }
    if (wej2.good()) {
        while (!wej2.eof()) {
            wej >> numb[zero];
            zero++;
        }
    }
    zero = 0;
    for (int i = 0; i < l; ++i) {
        if (numb[i] == conn[i]) {
            min++;
        }
        if (numb[i] > conn[i]) {
            max++;
        }
    }
    wyj << endl << "Max: ";
    wyj << max;
    wyj << endl << "equal: ";
    wyj << min;



    return 0;
}