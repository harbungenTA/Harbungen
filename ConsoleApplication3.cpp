#include <iostream>
#include <math.h>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;

int liczenie(int number) {

    int licz6 = 0; 

    while (number > 0)
    {
        if (number % 10 == 6)
            licz6++;
        number /= 10;
    }
    return licz6;
}


int osiem(string liczba) {
    int os = strtol(liczba.c_str(), NULL, 8);
    return os;
}

int main() {
    cout << liczenie(166)<<endl;
    cout << osiem << liczenie(166);
}
