#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#include <iostream>
#include <fstream>   
#include <string>

using namespace std;

int main()
{
    int a;
    string t[100];
    int lic = 0;
    ifstream plik;
    plik.open("D:\\plik.txt");
    if (plik.good())

        while (!plik.eof())
        {
            t[lic] = a;
            plik >> a;
            cout << lic++ << ":" << a;
            cout << endl;
        }
    plik.close();

    for (int i = 0; i < lic; i++)
        cout << lic << endl;
   
    return 0;
}