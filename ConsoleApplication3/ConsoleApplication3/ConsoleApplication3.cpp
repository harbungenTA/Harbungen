#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int tab[1000];
    int x = 0;

    ifstream wej;
        wej.open("wej.txt");
    ofstream wyj;
        wyj.open("dwa.txt");

                                                                             //By Bartosz Mucha
    if (wej.good())
        while (!wej.eof()) {
            wej >> tab[x];
            x++;
        }

    wej.close();


    for (int i = x - 1; i >= 0; i--)
    {
        wyj << tab[i];
    }

    wyj.close();

}

                