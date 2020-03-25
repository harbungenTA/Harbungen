#include <iostream>
#include <string>


using namespace std;


int main() {


	struct gry {
		string tytul;
		string wydawca;
		int rok;
		int ocena;
	} wow, gta;



	cout << "Podaj tytul:" << endl;
	cin >> wow.tytul;
	cout << "Podaj wydawce: " << endl;
	cin >> wow.wydawca;
	cout << "Podaj rok: " << endl;
	cin >> wow.rok;
	cout << "Podaj ocene: " << endl;
	cin >> wow.ocena;

	cout << "Teraz druga gra" << endl;
	cout << "Podaj tytul " << endl;
	cin >> gta.tytul;
	cout << "Podaj wydawce: " << endl;
	cin >> gta.wydawca;
	cout << "Podaj rok: " << endl;
	cin >> gta.rok;
	cout << "Podaj ocene: " << endl;
	cin >> gta.ocena;
	cout << "\n";

	cout << "Pierwsza gra to: " << wow.tytul << endl;
	cout << "Wydawca jest: " << wow.wydawca << endl;
	cout << "Rok wydania: " << wow.rok << endl;
	cout << "Ocena gry: " << wow.ocena << endl;
	cout << "Druga gra to: " << gta.tytul << endl;
	cout << "Pierwsza gra to: " << gta.tytul << endl;
	cout << "Wydawca jest: " << gta.wydawca << endl;
	cout << "Rok wydania: " << gta.rok << endl;
	cout << "Ocena gry: " << gta.ocena << endl;
	return 0;
}