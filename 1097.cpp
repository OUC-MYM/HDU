#include <iostream>
using namespace std;
int pow2(long long a,long long b)
{
    int r=1,base=a;
    while(b!=0)
    {
        if(b%2)
            r=(r*base)%10;
        base=(base%10)*(base%10);
        b/=2;
    }
    return r;
}
int main()
{
    long long a,b;
    while(cin >>a >> b)
    {
        cout << pow2(a,b)%10 << endl;
    }
    return 0;
}
