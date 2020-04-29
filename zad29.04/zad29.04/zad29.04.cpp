#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream wej;
    ofstream wyj;

    wej.open("wej.txt");
    wyj.open("wyj.json");

    int tab[1000];
    int x = 0;

    if (wej.good()) {
        wyj << "[";
        while (!wej.eof()) {
            wej >> tab[x++];
        }

        while (x != -1) {

            wyj << " {  \"liczba\" : \"" << tab[x--]<<"\"}";

            if (!wej.eof()) {

                wyj << ",";

            }

        }
        wyj << "]";
    }

    wej.close();
    wyj.close();

    return 0;
}