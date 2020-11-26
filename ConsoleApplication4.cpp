#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>

using namespace std;
int liczba;
 int nieparzyste(int liczba)
{
    int dl = liczba.length();
    int wynik = 0;
    for (int i = 0; i < dl; i++)
    {
        if (liczba[i] % 2 == 1)
            wynik++;
    }
    return wynik;
}
int main()
{
    ifstream liczby;
    liczby.open("liczby.txt");

    int licz;

    if (liczby.good())
        while (!liczby.eof()) {
            liczby >> licz;
            cout << "\n";
            for (int i = 2; i <= licz; i++) {
                while (licz % i == 0) {
                    cout << i << " ";
                    licz /= i;
                    i >> liczba;
                    nieparzyste(i);
                    if (nieparzyste == 3) {
                        cout << "TAK";
                    }
                    else {
                        cout << "Nie";
                    }
                }
            }
        }
    liczby.close();
    cout << "\n";
    system("pause");
    return 0;
}
