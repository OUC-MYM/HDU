#include<iostream>
#include<stdio.h>
#include<cstring>
#include <map>
using namespace std;

int main()
{
    map<string, int> Ballon;
    string color, MaxColor;
    int n,max;
    while(cin>>n&&n)
    {
        Ballon.clear();
        while(n--)
        {
            cin>>color;
            Ballon[color]++;
        }
        map<string, int>::iterator i;
        max = 0;
        for(i=Ballon.begin(); i!=Ballon.end(); i++)
        {
            if(i->second>max)
            {
                max = i->second;
                MaxColor = i->first;
            }
        }
        cout << MaxColor << endl;
    }
    return 0;
}
