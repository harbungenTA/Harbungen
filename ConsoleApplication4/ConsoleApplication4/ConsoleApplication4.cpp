#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string imie;
    string nazwisko;
    string id;
    string linia;


    ofstream wyjscie;
    ifstream wejscie;

    wejscie.open("wej.txt");
    wyjscie.open("wyj.json");
    if (wejscie.good())
        while (!wejscie.eof() && getline(wejscie, linia))
        {

            getline(wejscie, linia);
            wyjscie << "\n { \n \"imie\" : \" " << linia << "\"";

            getline(wejscie, linia);
            wyjscie << "  \n\"nazwisko\" : \" " << linia << "\"";

            getline(wejscie, linia);
            wyjscie << "  \n\"id\" : \" " << linia << "\"\n},";


        }

    wejscie.close();
    wyjscie.close();

    return 0;
}