#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    char n[3];
    while(cin >> n[0] >> n[1] >> n[2])
    {
        sort(n,n+3);
        printf("%c %c %c\n",n[0],n[1],n[2]);
    }
    return 0;
}
