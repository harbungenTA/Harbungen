#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

ifstream wej("wiadomosci.txt");
ifstream pod("podpisy.txt");
ofstream epod("epodpis.txt");

bool first = true;

string gen(string t) {
   string alg = "mus";
   
   while (t.length()%8 !=0) 
		t += '.';
		
   int n = t.length();
   
   if (first) 
   		epod << n << endl;
   		
   int i=0;
   
   while (i<n) 
   {
        for (int j=0; j<8; j++) 
		{
           alg[j] = (alg[j]+t[i]) 
		   		%128;
           i++;
        }
   }
   if (first) 
   {
        for (int j=0; j<8; j++) 
			epod << (int)alg[j] << " ";
        epod << endl;
   }
   for (int j=0; j<8; j++)
        alg[j] = 65 + alg[j]%26;
   if (first) 
   {
        epod << alg << endl << endl;
        first = false;
   }
   return alg;
}

int main()
{
    string ent;
    string mis, miss;
    
	vector<int> Wroc;
    
    int x,y;
    int n =200;
    int d = 3;

    for (int i=1; i<=11; i++) 
	{
        getline(wej,ent);
        ent = gen(ent);

        miss = "";
        
        for (int j=0; j<8; j++) {
           pod >> y;
           x = (y*d)%n;
           miss += (char)x;
        }
        epod << i << "\t" << miss << "\t";
        if (mis==miss) {
                epod << "wiary\n";
                Wroc.push_back(i);
        }
        else epod << "zmiana\n";
    }
    
    for (int i=0; i<Wroc.size(); i++) 
		epod << Wroc[i] << " ";

    wej.close();
    pod.close();
    epod.close();

    return 0;
}
