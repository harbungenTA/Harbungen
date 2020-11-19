#include <iostream>
#include <bitset>
#include <fstream>
#include <math.h>

using namespace std;

int licz1, licz2;

int zerujBit(int liczba, int nrBitu) {
    return (~(0b100000 << nrBitu) & liczba);
}

int main()
{
    ifstream plik;
    plik.open("a.txt");

    ofstream plik2;
    plik2.open("b.txt");
 
    if (plik.good())
    {
        while (!plik.eof()) {
            plik >> licz1 >> licz2;
            plik2 << zerujBit(licz1, licz2) << endl;
            cout << zerujBit(licz1, licz2) << endl;
        }

    }

    plik.close();
    plik2.close();

    return 0;
}