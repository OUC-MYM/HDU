#include<iostream>
using namespace std;

void swap(int &m,int &n)
{
    if(m>n)
    {
        int temp=m;
        m=n;
        n=temp;
    }
}

int main()
{
    int m,n;
    while(cin >> m >> n)
    {
        swap(m,n);
        int ans1=0,ans2=0;
        for(int i=m;i<=n;i++)
        {
            if(i%2)
                ans2=ans2+i*i*i;
            else
                ans1=ans1+i*i;
        }
        cout << ans1 << " " << ans2 << endl;
    }
}
