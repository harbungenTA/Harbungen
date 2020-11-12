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
	cout << bitset<8>(c)<<endl;
	cout << bitset<8>(d)<<endl;
	cout << bitset<8>(e)<<endl;
	
	cout << bitset<16>(0x00FF01100)<<endl;
	cout << sizeof(int)<<endl;
	cout << sizeof(long long)<<endl;

	int red = 0x00ff0000;
	int green = 0x0000ff00;
	int blue = 0x000000ff;

	cout << hex << (green ^ blue ^ red) << endl;
	int kolor = 0x00123456;
	cout << (kolor & 0x0000ff00)<<endl;
	cout << (kolor & red)<<endl;

	int r1 = 0xaa;
	int r2 = 0xff;
	cout << "przejscie od " << dec << r1 << "do" << r2;
	int rStep = (r2 - r1) / 10;

	cout << (0xaabb0099 & green);

	int kolor2 = 0x0ff20012;
	int czer, nieb, ziel, prze;

	cout << "Jego red wynosi: " << (kolor2 & red) << endl;
	cout << "Jego blue wynosi: " << (kolor2 & blue) << endl;
	cout << "Jego green wynosi: " << (kolor2 & green) << endl;
	cout << "Jego przezroczystosc wynosi: " << (kolor2 & 0x000000) << endl;


	return 0;

}