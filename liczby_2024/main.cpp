#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    fstream wejscie("liczby.txt");
    //fstream wejscie("liczby_przyklad.txt");
    int we;
    vector<int> tab1;
    vector<int> tab2;
    for(int i=0;i<3000;i++)
    {
        wejscie>>we;
        tab1.push_back(we);
    }
    for(int i=0;i<20;i++)
    {
        wejscie>>we;
        tab2.push_back(we);
    }
    for(int i=0;i<20;i++)
    {
        int tym=tab2[i];
        for(int j=0;j<3000;j++)
        {
            if(tym%tab1[j]==0)
            {
                tym/=tab1[j];
            }
        }
        if(tym==1)
        {
            cout<<tab2[i]<<endl;
        }
    }

}
