#include<iostream>
#include<cmath>
#include<string.h>
#define MAX 1000050
using namespace std;

int ans[MAX];
bool vis[MAX];

int S(int n)
{
    int sum=0;
    for(int i=1; i<n; i++)
        if(n%i==0)
            sum=sum+i;
    return sum;
}


void solve()
{
    for(int i=1; i<MAX/2; i++ )
        for(int j=i*2; j<MAX; j=j+i )
            if(j%i==0)
                ans[j]=ans[j]+i;
    for(int i=2; i<MAX; i++ )
        if(ans[i]<=1000)
            vis[ans[i]]=false;
}


int main()
{
    memset(vis,true,sizeof(vis));
    solve();
    int T;
    cin >> T;
    while(T--)
    {
        int n;
        cin >> n;
        if(vis[n]==true)
            cout << "yes" <<endl;
        else
            cout << "no" <<endl;
    }
}
