#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

void lad() {
	int li, li2, li1, di, di1;

	bool pi = true;

	ifstream ciag;
	ciag.open("ciagi.txt");

	while (ciag.good()) {

		bool ciag1 = true;

		if (!ciag.eof()) {

			ciag >> li;
			li2 = li;
			for (int i = 0; i < li2; i++) {
				ciag >> li;

				if (pi == false) {
					di = li1 - li;
				}
				if (di != di1) {
					ciag1 = false;

				}
				li1 = li;
				pi = false;
				di1 = di;
			}
			if (ciag1 == false) {
				cout << endl << "nope";
			}
			else {
				cout << endl << "yea";
			}
		}
	}
	ciag.close();
}


int main() {

	lad();

	return 0;
}
