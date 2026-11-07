#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

double average(vector<int> tablica,int i, double zakres)
{
    double suma=0;
    for(;i<i+zakres;i++)//zly zakres bo sie ciagle zwieksza i loop nigdy nie zamyka
    {
        suma+=tablica[i];
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
    
    for(int i=0;i<3000-50;i++)//ostatni element nie jest uwzgledniany
    {
        for(int zakres=50;zakres+i<3000;zakres++)
        {
            if(average(jeden,i,zakres)>maks)
            {
                maks=average(jeden,i,zakres);//kod jest nie zoptymalizowany bo jest ponad 4bln addycji
                maks_zakres=zakres;//wektor kopiowany za każdym razem
                iteracja=i;//srednia jest dwa razy robiona
            }
        }
    }
    cout<<maks<<" "<<maks_zakres<<" "<<iteracja;
    
    
}
