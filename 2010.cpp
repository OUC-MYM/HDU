#include<iostream>
using namespace std;

bool is(int n)
{
    int sum=0;
    int temp=n;
    while(temp)
    {
        int j=temp%10;
        sum=sum+j*j*j;
        temp=temp/10;
    }
    if(sum==n)
        return true;
    return false;
}

int main()
{
    int m,n;
    while(cin >> m >> n)
    {
        int flag=0;
        for(int i=m; i<=n; i++)
        {
            if(is(i)&&flag==0)
            {
                flag=1;
                cout << i;
                continue;
            }
            if(is(i)&&flag==1)
                cout << " " << i;
        }
        if(!flag)
            cout << "no";
        cout << endl;
    }
    return 0;
}
