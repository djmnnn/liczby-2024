#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    fstream wejscie("liczby.txt");
    //fstream wejscie("liczby_przyklad.txt");
    int we,maks=2001;
    vector<int> tab;
    vector<int> sord;
    for(int i=0;i<3000;i++)
    {
        wejscie>>we;
        tab.push_back(we);
    }
    for(int i=0;i<2;i++)
    {
        sord.push_back(*max_element(tab.begin(),tab.end()));
        tab.erase(max_element(tab.begin(),tab.end()));
    }
    cout<<sord[1];
}
