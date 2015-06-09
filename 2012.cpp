#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int n)
{
    n=n*n+n+41;
    int flag=0;
    for(int i=2; i<=sqrt(n)+1; i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        return false;
    return true;
}

int main()
{
    int x,y;
    while(cin >> x >> y)
    {
        if(x==0&&y==0)
            break;
        int flag=0;
        for(int i=x; i<=y; i++)
        {
            if(!is_prime(i))
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout << "Sorry" <<endl;
        else
            cout << "OK" <<endl;
    }
}
