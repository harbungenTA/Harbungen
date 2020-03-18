#include <iostream>

using namespace std;

int a;
int main()
{
	int tab[121];
	for (int i = 0; i < 121; i++)
	{
		tab[i] = 0;
	}
		cout << "Podaj liczbe od 1-119:";
		cin >> a;
			tab[a] = 100;
			tab[a - 1] = 10;
			tab[a + 1] = 10;
            for (int i = 120; i >= 0; i--)
            {
                if (tab[i] == '121')
                {
                    cout << " ";
                }
                else
                {
                    cout << tab[i];
                }
            }




 return 0;
}
