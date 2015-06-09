#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    char balloons[1050][20];
    char color[20];
    int count[1050];



    int n;
    while(cin>>n)
    {
        if(n)
        {
            int max=0;
            int sign=0;
            memset(count,0,sizeof(count));
            memset(balloons,0,sizeof(balloons));
            while(n--)
            {
                cin>>color;
                for(int i=0; i<1050; i++)
                {
                    if(count[i]==0)
                    {
                        strcpy(balloons[i],color);
                        count[i]++;
                        break;
                    }
                    if(strcmp(balloons[i],color)==0)
                    {
                        count[i]++;
                        break;
                    }
                }
            }
            for(int i=0; count[i]; i++)
                if(count[i]>=max)
                {
                    max=count[i];
                    sign=i;
                }
            cout << balloons[sign] <<endl;
        }
    }
    return 0;
}
