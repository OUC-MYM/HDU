#include <iostream>
using namespace std;
int f[10000];

int main ()
{
    int a,b,n;
    while(cin>>a>>b>>n,a&&b&&n)
    {
        int i;
        f[1]=f[2]=1;
        for (i=3; i<10000; i++)
        {
            f[i]=(a*f[i-1]+b*f[i-2])%7;
            if (f[i]==1&&f[i-1]==1)
                break;
        }
        int T=i-2;
        f[0]=f[T];
        cout << f[n%T] <<endl;
    }
    return 0;
}
