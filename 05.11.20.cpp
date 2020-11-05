#include <iostream>
#include <bitset>

using namespace std;

unsigned a, b, c, d, e, f, g;

int main() {

	cout << "Podaj a: ";
	cin >> a;
	cout << "\n";
	cout << "Podaj b: ";
	cin >> b;
	cout << "\n";

	c = a | b;
	d = a & b;
	e = a ^ b;
	f = a>>=b;
	g = a<<=b;
	cout << bitset<8>(c)<<endl;
	cout << bitset<8>(d)<<endl;
	cout << bitset<8>(e)<<endl;
	cout << bitset<8>(f)<<endl;
	cout << bitset<8>(g);
	
	return 0;
}