#include <iostream>

using namespace std;

long long exGCD(long long a,long long b,long long &x,long long &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    long long r=exGCD(b,a%b,x,y);
    long long t=x;
    x=y;
    y=t-a/b*y;
    return r;    //r==GCD(a,b)
}

int main()
{
    long long a,b;
    while(cin >> a >> b)
    {
        long long x,y;
        long long gcd=exGCD(a,b,x,y);
        if(x%gcd||y%gcd)
        cout << "sorry" << endl;
        else
        {
            x/=gcd,y/=gcd;
            while(x<0)
                x+=b/gcd,y-=a/gcd;
            cout <<  x << " " << y << endl;
        }
    }
    return 0;
}
