#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //fstream wejscie("liczby.txt");
    fstream wejscie("liczby_przyklad.txt");
    int we,tab1[3000],tab2[20],odp=0;
    for(int i=0;i<3000;i++)
    {
        wejscie>>we;
        tab1[i]=we;
    }
    for(int i=0;i<20;i++)
    {
        wejscie>>we;
        tab2[i]=we;
    }
    for(int i=0;i<3000;i++)
    {
        for(int j=0;j<20;j++)
        {
            if(tab2[j]%tab1[i]==0){
                odp++;
                break;
            }

        }
    }
    cout<<odp;
}
