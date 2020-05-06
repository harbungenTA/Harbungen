#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {

	int t[100];

	ifstream wej;
	wej.open("wej.txt");
	ofstream wyj;
	wyj.open("wyj.json");

	if (wej.good()) {
		while (!wej.eof())

			for (int i = 0; i < 10; i++)
				wej >> t[i];
	}

	int x = t[0];

	for (int i = 0; i < 10; i++) {
		if (x < t[i])
			x = t[i];
	}

	wyj << "[ \n { \n \"najwieksza\" : \" " << x;

	wej.close();
	wyj.close();

	return 0; 
}