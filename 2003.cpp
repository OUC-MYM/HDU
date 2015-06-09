#include<stdio.h>

double abs(double n)
{
    if(n<0)
        return -n;
    return n;
}

int main()
{
    double n;
    while(~scanf("%lf",&n))
    {
        printf("%.2lf\n",abs(n));
    }
}
