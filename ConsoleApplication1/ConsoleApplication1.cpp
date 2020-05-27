#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    srand(time(NULL));

    int liczby[6];

    cout << "Losowanie lotto:";

    for (int i = 0; i < 6; i++) {

        liczby[i] = rand() % 49 + 1;

        for (int j = i - 1; j > 0; j--) {
            if (liczby[i] == liczby[j]) {
                i--;
                break;
            }
        }
    }

    for (int u = 0; u < 6; u++) {
        cout << liczby[u] << " \n ";
    }

    return 0;
}