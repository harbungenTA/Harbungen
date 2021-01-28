#include <iostream>
#include <math.h>
#include <ctime>
#include <conio.h>
#include <time.h>
#include <fstream>

using namespace std;

int main() {

    ifstream wej("liczby1.txt");
    ifstream wej2("liczby2.txt");
    ofstream wyj("wynik.txt");

    int r, r2;
    int dif;
    bool difff= false;
    int que, i, i2;
    int c[1000];
    int c2[1000];

    if (wej2.good()) {
        while (!wej2.eof()) {

            wej2 >> dec >> c2[que];
            if (que >= 1) {
                r2 = r;
                r = c2[que - 1] - c2[que];

                if (r == r2 && que >= 2) {
                    while(i<999 & c[i+1]>c[i])
                    { 
                        if (i > i2) {
                            if (difff == false) {
                                dif = c2[que];
                                difff = true;
                                i++;

                            }
                        }
                        i = i2;
                    }

                }
                else {
                    i = 0;
                    difff = false;
                }
            }

            que = que + 1;
        }

        cout << endl << dif << ":" << i2;
    }
	return 0;
}