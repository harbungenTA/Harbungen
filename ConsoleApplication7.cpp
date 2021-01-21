#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

const int o = 100;
bool ch(int liczba) {
    int cube = 0;
    for (int i = 0; i < liczba / 2 && liczba >= cube; i++) {
        cube = i * i * i;
        if (liczba == cube) {
            return true;
        }
    }
    return false;
}
int main() {
    ifstream wej("ciagi.txt");
    ofstream wyj("wyj.txt");
    bool cube;
    bool cube2;
    int ciag[1000];
    int cubeCiag[100];
    for (int e = 0; e < o; e++)
    {
        double length;
        wej >> length;
        for (int i = 0; i < length; i++) {
            cube = false;
            wej >> ciag[i];
            cube = ch(ciag[i]);
            if (cube == true) {
                cubeCiag[e] = ciag[i];
                cube2 = true;
            }
        }
        if (cube2 == false) {
            cubeCiag[e] = 0;
        }
        cube2 = false;
    }
    for (int i = 0; i < o; i++) {
        wyj << cubeCiag[i];

    }
    wej.close();
    wyj.close();
    return 0;
}
