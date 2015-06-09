#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{
    int T;
    //cin >> T;
    scanf("%d",&T);
    for(int count=1;count<=T;count++)
    {
        int N;
        //cin >> N;
        scanf("%d",&N);
        int a[N+1];
        int max=-99999;
        int sum=0,sta=1,end=1,top=1;
        for(int i=1;i<=N;i++)
           {
               //cin >> a[i];
               scanf("%d",&a[i]);
               if(sum+a[i]<a[i])
               {
                   sum=a[i];
                   top=i;
               }
               else
                sum=sum+a[i];
               if(sum>max)
               {
                   max=sum;
                   sta=top;
                   end=i;
               }
           }
        //cout << "Case " << count << ":" << endl;
        //cout << max << " " << sta << " " << end << endl;
        printf("Case %d:\n%d %d %d\n",count,max,sta,end);
        if(count!=T)
            //cout << endl;
            printf("\n");
    }
    return 0;
}
