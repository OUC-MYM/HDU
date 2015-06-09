#include<iostream>
#include<cstring>
#include<stdio.h>
#include<algorithm>
using namespace std;

struct data
{
    int j;
    int f;
    double jun;
} num[100500];

bool cmp(data a,data b)
{
    if (a.jun>=b.jun)
        return true;
    else return false;
}


int main()
{
    int M,N;
    while(cin >>M>>N)
    {
        if(M==-1&&N==-1)
            break;
        double ans=0;
        for(int i=0; i<N; i++)
        {
            cin>>num[i].j>>num[i].f;
            num[i].jun=num[i].j*1.0/num[i].f;
        }
        sort(num,num+N,cmp);
        for(int i=0; i<N; i++)
        {
            if(M>=num[i].f)
            {
                M=M-num[i].f;
                ans=ans+num[i].j;
                continue;
            }
            if(M<num[i].f)
            {
                ans=ans+num[i].jun*M;
                break;
            }
        }
        printf("%.3f\n",ans);
    }
    return 0;
}
