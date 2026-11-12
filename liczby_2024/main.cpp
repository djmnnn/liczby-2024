#include <iomanip>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

double average(vector<int> tablica,int i, double zakres)
{
    double suma=0;
    for(int j=i;j<i+zakres;j++)
    {
        suma+=tablica[j];
    }
    double srednia=suma/zakres;
    return srednia;
}

int main()
{
    fstream wejscie("liczby.txt");
    int we,maks_zakres,iteracja;
    double maks=-1;
    vector<int> jeden;

    for(int i=0;i<3000;i++)
    {
        wejscie>>we;
        jeden.push_back(we);
    }

    for(int i=0;i<=3000-50;i++)
    {
        for(int zakres=50;zakres+i<=3000;zakres++)
        {
            double aktualna=average(jeden,i,zakres);
            if(aktualna>maks)
            {
                maks=aktualna;
                maks_zakres=zakres;
                iteracja=i;
            }
        }
    }

    cout<<setprecision(15)<<maks<<" "<<maks_zakres<<" "<<jeden[iteracja];
}
