#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	
	string tab[100];
	
    string slowa;
    ifstream plik;

    plik.open("D:\\plik.txt");
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
   
            for (int i = 0; i < 100 && plik >> slowa ; ++i) {
                tab[i];
            }
            cout << tab << endl;
        }
        plik.close();
    }


	return 0;
}