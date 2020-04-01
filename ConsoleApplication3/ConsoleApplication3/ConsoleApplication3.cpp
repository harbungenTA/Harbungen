#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string tab[100];

    ifstream plik;
    string dis;
    int x = 1;

    plik.open("D:\plik.txt");

 

    if (plik.good())
        while (!plik.eof())
        {
            getline(plik, dis);
            plik >> tab[x];

            x++;
        }
    plik.close();

    for (int j = 0; j < x; j++)
        cout << tab[j] << endl;


    return 0;

}