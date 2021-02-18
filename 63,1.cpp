#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;

class plik {

    int n = 0;
    int size = 0;
    ifstream input;


public:


    bool twocycle(string s);
    bool two2(string s);

    void run();

};


void plik::run() {

    input.open("ciagi.txt");

    string otw;

    for (int i = 0; i < 1000; ++i) {

        input >> otw;

        if (twocycle(otw)) {
            cout << otw << endl;
        }
        if (two2(otw) == true) {
            n++;
        }
    }
    cout << n;
}


bool plik::twocycle(string s) {

    if (s.size() % 2 == 0) {

        if (s.substr(s.size() / 2, s.size() / 2) == s.substr(0, s.size() / 2)) {

            return true;

        }
    }
    return false;
}

bool plik::two2(string s) {

    for (int i = 1; i < s.size(); ++i) {

        if (s[i] == '1' && s[i - 1] == '1') {

            return false;

        }
    }
    return true;
}


int main() {

    plik wyj2;
    wyj2.run();

    return 0;
}