#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        int fuhao=1;
        double sum=0;
        int temp=1;
        for(int i=1;i<=n;i++)
        {
            sum=sum+fuhao*1.0/temp;
            temp++;
            fuhao=fuhao*-1;
        }
        printf("%.2lf\n",sum);
    }
}
