#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main()
{
    ifstream liczby;
    liczby.open("liczby.txt");

    int licz;

    if(liczby.good())
        while (!liczby.eof()) {
            liczby>>licz;
            cout << "\n";
            for (int i = 2; i <= licz; i++) {
                while (licz % i == 0) {
                    cout << i << " ";
                    licz /= i;
                }
            }
        }
    liczby.close();
    cout << "\n";
    system("pause");
    return 0;
}