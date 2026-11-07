#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    fstream wejscie("liczby.txt");
    int we;
    vector<int> jeden;
    vector<int> dwa;
    for(int i=0;i<3020;i++)
    {
        wejscie>>we;
        if(i<3000)
            jeden.push_back(we);
        else
            dwa.push_back(we);
        
    }
    for(int i=0;i<20;i++)
    {
        int tym=dwa[i];
        for(int j=0;j<3000;j++)
        {
            if(tym%jeden[j]==0)
            {
                tym/=jeden[j];
            }
        }
        if(tym==1)
        {
            cout<<dwa[i]<<endl;
        }
    }
    
}
