#include<stdio.h>

int main()
{
    int n;
    int temp;
    while(~scanf("%d",&n))
    {
        long long ans=1;
        while(n--)
        {
            scanf("%d",&temp);
            if(temp%2)
                ans=ans*temp;
        }
        printf("%I64d\n",ans);
    }
}
